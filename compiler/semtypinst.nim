#
#
#           The Nimrod Compiler
#        (c) Copyright 2012 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

# This module does the instantiation of generic types.

import ast, astalgo, msgs, types, magicsys, semdata, renderer

proc checkPartialConstructedType(info: TLineInfo, t: PType) =
  if tfAcyclic in t.flags and skipTypes(t, abstractInst).kind != tyObject:
    LocalError(info, errInvalidPragmaX, "acyclic")
  elif t.kind == tyVar and t.sons[0].kind == tyVar:
    LocalError(info, errVarVarTypeNotAllowed)

proc checkConstructedType*(info: TLineInfo, typ: PType) = 
  var t = typ.skipTypes({tyDistinct})
  if t.kind in {tyTypeClass}: nil
  elif tfAcyclic in t.flags and skipTypes(t, abstractInst).kind != tyObject: 
    LocalError(info, errInvalidPragmaX, "acyclic")
  elif t.kind == tyVar and t.sons[0].kind == tyVar: 
    LocalError(info, errVarVarTypeNotAllowed)
  elif computeSize(t) < 0:
    LocalError(info, errIllegalRecursionInTypeX, typeToString(t))
  when false:
    if t.kind == tyObject and t.sons[0] != nil:
      if t.sons[0].kind != tyObject or tfFinal in t.sons[0].flags: 
        localError(info, errInheritanceOnlyWithNonFinalObjects)

proc searchInstTypes(tab: TIdTable, key: PType): PType = 
  # returns nil if we need to declare this type
  result = PType(IdTableGet(tab, key))
  if result == nil and tab.counter > 0: 
    # we have to do a slow linear search because types may need
    # to be compared by their structure:
    for h in countup(0, high(tab.data)): 
      var t = PType(tab.data[h].key)
      if t != nil: 
        if key.containerId == t.containerId: 
          var match = true
          for j in countup(0, sonsLen(t) - 1): 
            # XXX sameType is not really correct for nested generics?
            if not sameType(t.sons[j], key.sons[j]): 
              match = false
              break 
          if match: 
            return PType(tab.data[h].val)

type
  TReplTypeVars* {.final.} = object 
    c*: PContext
    typeMap*: TIdTable        # map PType to PType
    symMap*: TIdTable         # map PSym to PSym
    info*: TLineInfo

proc ReplaceTypeVarsT*(cl: var TReplTypeVars, t: PType): PType
proc ReplaceTypeVarsS(cl: var TReplTypeVars, s: PSym): PSym
proc ReplaceTypeVarsN(cl: var TReplTypeVars, n: PNode): PNode

proc prepareNode(cl: var TReplTypeVars, n: PNode): PNode =
  result = copyNode(n)
  result.typ = ReplaceTypeVarsT(cl, n.typ)
  if result.kind == nkSym: result.sym = ReplaceTypeVarsS(cl, n.sym)
  for i in 0 .. safeLen(n)-1: 
    # XXX HACK: ``f(a, b)``, avoid to instantiate `f` 
    if i == 0: result.add(n[i])
    else: result.add(prepareNode(cl, n[i]))

proc ReplaceTypeVarsN(cl: var TReplTypeVars, n: PNode): PNode =
  if n == nil: return
  result = copyNode(n)
  result.typ = ReplaceTypeVarsT(cl, n.typ)
  case n.kind
  of nkNone..pred(nkSym), succ(nkSym)..nkNilLit:
    nil
  of nkSym:
    result.sym = ReplaceTypeVarsS(cl, n.sym)
  of nkRecWhen:
    var branch: PNode = nil              # the branch to take
    for i in countup(0, sonsLen(n) - 1):
      var it = n.sons[i]
      if it == nil: illFormedAst(n)
      case it.kind
      of nkElifBranch:
        checkSonsLen(it, 2)
        var cond = prepareNode(cl, it.sons[0])
        var e = cl.c.semConstExpr(cl.c, cond)
        if e.kind != nkIntLit:
          InternalError(e.info, "ReplaceTypeVarsN: when condition not a bool")
        if e.intVal != 0 and branch == nil: branch = it.sons[1]
      of nkElse:
        checkSonsLen(it, 1)
        if branch == nil: branch = it.sons[0]
      else: illFormedAst(n)
    if branch != nil:
      result = ReplaceTypeVarsN(cl, branch)
    else:
      result = newNodeI(nkRecList, n.info)
  else:
    var length = sonsLen(n)
    if length > 0:
      newSons(result, length)
      for i in countup(0, length - 1):
        result.sons[i] = ReplaceTypeVarsN(cl, n.sons[i])
  
proc ReplaceTypeVarsS(cl: var TReplTypeVars, s: PSym): PSym = 
  if s == nil: return nil
  result = PSym(idTableGet(cl.symMap, s))
  if result == nil: 
    result = copySym(s, false)
    incl(result.flags, sfFromGeneric)
    idTablePut(cl.symMap, s, result)
    result.typ = ReplaceTypeVarsT(cl, s.typ)
    result.owner = s.owner
    result.ast = ReplaceTypeVarsN(cl, s.ast)

proc lookupTypeVar(cl: TReplTypeVars, t: PType): PType = 
  result = PType(idTableGet(cl.typeMap, t))
  if result == nil:
    LocalError(t.sym.info, errCannotInstantiateX, typeToString(t))
    result = errorType(cl.c)
  elif result.kind == tyGenericParam: 
    InternalError(cl.info, "substitution with generic parameter")
  
proc handleGenericInvokation(cl: var TReplTypeVars, t: PType): PType = 
  # tyGenericInvokation[A, tyGenericInvokation[A, B]]
  # is difficult to handle: 
  var body = t.sons[0]
  if body.kind != tyGenericBody: InternalError(cl.info, "no generic body")
  var header: PType = nil
  when true:
    # search for some instantiation here:
    result = searchInstTypes(cl.c.generics.InstTypes, t)
    if result != nil: return
    for i in countup(1, sonsLen(t) - 1):
      var x = t.sons[i]
      if x.kind == tyGenericParam: 
        x = lookupTypeVar(cl, x)
        if header == nil: header = copyType(t, t.owner, false)
        header.sons[i] = x
        #idTablePut(cl.typeMap, body.sons[i-1], x)
    if header != nil:
      # search again after first pass:
      result = searchInstTypes(cl.c.generics.InstTypes, header)
      if result != nil: return
    else:
      header = copyType(t, t.owner, false)
    # ugh need another pass for deeply recursive generic types (e.g. PActor)
    # we need to add the candidate here, before it's fully instantiated for
    # recursive instantions:
    result = newType(tyGenericInst, t.sons[0].owner)
    idTablePut(cl.c.generics.InstTypes, header, result)

    for i in countup(1, sonsLen(t) - 1):
      var x = replaceTypeVarsT(cl, t.sons[i])
      assert x.kind != tyGenericInvokation
      header.sons[i] = x
      idTablePut(cl.typeMap, body.sons[i-1], x)
    
    for i in countup(0, sonsLen(t) - 1): 
      # if one of the params is not concrete, we cannot do anything
      # but we already raised an error!
      rawAddSon(result, header.sons[i])
    
    var newbody = ReplaceTypeVarsT(cl, lastSon(body))
    newbody.flags = newbody.flags + t.flags + body.flags
    result.flags = result.flags + newbody.flags
    newbody.callConv = body.callConv
    newbody.n = ReplaceTypeVarsN(cl, lastSon(body).n)
    # This type may be a generic alias and we want to resolve it here.
    # One step is enough, because the recursive nature of
    # handleGenericInvokation will handle the alias-to-alias-to-alias case
    if newbody.isGenericAlias: newbody = newbody.skipGenericAlias
    rawAddSon(result, newbody)
    checkPartialConstructedType(cl.info, newbody)
  else:
    for i in countup(1, sonsLen(t) - 1):
      if PType(idTableGet(cl.typeMap, t.sons[i])) == nil: debug(t)
      var x = replaceTypeVarsT(cl, t.sons[i])
      if t.sons[i].kind == tyGenericParam: 
        if header == nil: header = copyType(t, t.owner, false)
        header.sons[i] = x
      assert x.kind != tyGenericInvokation
      idTablePut(cl.typeMap, body.sons[i-1], x)
    if header == nil: header = t
    result = searchInstTypes(cl.c.generics.InstTypes, header)
    if result != nil: return 
    result = newType(tyGenericInst, t.sons[0].owner)
    for i in countup(0, sonsLen(t) - 1): 
      # if one of the params is not concrete, we cannot do anything
      # but we already raised an error!
      addSon(result, header.sons[i])
    idTablePut(cl.c.generics.InstTypes, header, result)
    var newbody = ReplaceTypeVarsT(cl, lastSon(body))
    newbody.flags = newbody.flags + t.flags + body.flags
    newbody.n = ReplaceTypeVarsN(cl, lastSon(body).n)
    addSon(result, newbody)
    checkPartialConstructedType(cl.info, newbody)
  
proc ReplaceTypeVarsT*(cl: var TReplTypeVars, t: PType): PType = 
  result = t
  if t == nil: return 
  case t.kind
  of tyTypeClass: nil
  of tyGenericParam:
    result = lookupTypeVar(cl, t)
    if result.kind == tyGenericInvokation:
      result = handleGenericInvokation(cl, result)
  of tyGenericInvokation: 
    result = handleGenericInvokation(cl, t)
  of tyGenericBody: 
    InternalError(cl.info, "ReplaceTypeVarsT: tyGenericBody")
    result = ReplaceTypeVarsT(cl, lastSon(t))
  of tyInt:
    result = skipIntLit(t)
  else:
    if containsGenericType(t):
      result = copyType(t, t.owner, false)
      incl(result.flags, tfFromGeneric)
      result.size = -1 # needs to be recomputed
      for i in countup(0, sonsLen(result) - 1):
        result.sons[i] = ReplaceTypeVarsT(cl, result.sons[i])
      result.n = ReplaceTypeVarsN(cl, result.n)
      if result.Kind in GenericTypes:
        LocalError(cl.info, errCannotInstantiateX, TypeToString(t, preferName))
      if result.kind == tyProc and result.sons[0] != nil:
        if result.sons[0].kind == tyEmpty:
          result.sons[0] = nil
  
proc generateTypeInstance*(p: PContext, pt: TIdTable, arg: PNode, 
                           t: PType): PType = 
  var cl: TReplTypeVars
  InitIdTable(cl.symMap)
  copyIdTable(cl.typeMap, pt)
  cl.info = arg.info
  cl.c = p
  pushInfoContext(arg.info)
  result = ReplaceTypeVarsT(cl, t)
  popInfoContext()

