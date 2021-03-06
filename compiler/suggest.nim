#
#
#           The Nimrod Compiler
#        (c) Copyright 2012 Andreas Rumpf
#
#    See the file "copying.txt", included in this
#    distribution, for details about the copyright.
#

## This file implements features required for IDE support.

# imported from sigmatch.nim

const
  sep = '\t'
  sectionSuggest = "sug"
  sectionDef = "def"
  sectionContext = "con"
  sectionUsage = "use"

#template sectionSuggest(): expr = "##begin\n" & getStackTrace() & "##end\n"

proc SymToStr(s: PSym, isLocal: bool, section: string, li: TLineInfo): string = 
  result = section
  result.add(sep)
  result.add($s.kind)
  result.add(sep)
  if not isLocal: 
    if s.kind != skModule and s.owner != nil: 
      result.add(s.owner.name.s)
      result.add('.')
  result.add(s.name.s)
  result.add(sep)
  if s.typ != nil: 
    result.add(typeToString(s.typ))
  result.add(sep)
  result.add(toFullPath(li))
  result.add(sep)
  result.add($ToLinenumber(li))
  result.add(sep)
  result.add($ToColumn(li))

proc SymToStr(s: PSym, isLocal: bool, section: string): string = 
  result = SymToStr(s, isLocal, section, s.info)

proc filterSym(s: PSym): bool {.inline.} =
  result = s.name.s[0] in lexer.SymChars and s.kind != skModule

proc fieldVisible*(c: PContext, f: PSym): bool {.inline.} =
  let fmoduleId = getModule(f).id
  result = sfExported in f.flags or fmoduleId == c.module.id or
      fmoduleId == c.friendModule.id

proc suggestField(c: PContext, s: PSym, outputs: var int) = 
  if filterSym(s) and fieldVisible(c, s):
    SuggestWriteln(SymToStr(s, isLocal=true, sectionSuggest))
    inc outputs

when not defined(nimhygiene):
  {.pragma: inject.}

template wholeSymTab(cond, section: expr) {.immediate.} =
  for i in countdown(c.tab.tos-1, 0):
    for item in items(c.tab.stack[i]):
      let it {.inject.} = item
      if cond:
        SuggestWriteln(SymToStr(it, isLocal = i > ModuleTablePos, section))
        inc outputs

proc suggestSymList(c: PContext, list: PNode, outputs: var int) = 
  for i in countup(0, sonsLen(list) - 1): 
    if list.sons[i].kind == nkSym:
      suggestField(c, list.sons[i].sym, outputs)
    #else: InternalError(list.info, "getSymFromList")

proc suggestObject(c: PContext, n: PNode, outputs: var int) = 
  case n.kind
  of nkRecList: 
    for i in countup(0, sonsLen(n)-1): suggestObject(c, n.sons[i], outputs)
  of nkRecCase: 
    var L = sonsLen(n)
    if L > 0:
      suggestObject(c, n.sons[0], outputs)
      for i in countup(1, L-1): suggestObject(c, lastSon(n.sons[i]), outputs)
  of nkSym: suggestField(c, n.sym, outputs)
  else: nil

proc nameFits(c: PContext, s: PSym, n: PNode): bool = 
  var op = n.sons[0]
  if op.kind in {nkOpenSymChoice, nkClosedSymChoice}: op = op.sons[0]
  var opr: PIdent
  case op.kind
  of nkSym: opr = op.sym.name
  of nkIdent: opr = op.ident
  else: return false
  result = opr.id == s.name.id

proc argsFit(c: PContext, candidate: PSym, n, nOrig: PNode): bool = 
  case candidate.kind 
  of OverloadableSyms:
    var m: TCandidate
    initCandidate(m, candidate, nil)
    sigmatch.partialMatch(c, n, nOrig, m)
    result = m.state != csNoMatch
  else:
    result = false

proc suggestCall(c: PContext, n, nOrig: PNode, outputs: var int) = 
  wholeSymTab(filterSym(it) and nameFits(c, it, n) and argsFit(c, it, n, nOrig),
              sectionContext)

proc typeFits(c: PContext, s: PSym, firstArg: PType): bool {.inline.} = 
  if s.typ != nil and sonsLen(s.typ) > 1 and s.typ.sons[1] != nil:
    result = sigmatch.argtypeMatches(c, s.typ.sons[1], firstArg)

proc suggestOperations(c: PContext, n: PNode, typ: PType, outputs: var int) =
  assert typ != nil
  wholeSymTab(filterSym(it) and typeFits(c, it, typ), sectionSuggest)

proc suggestEverything(c: PContext, n: PNode, outputs: var int) =
  # do not produce too many symbols:
  for i in countdown(c.tab.tos-1, 1):
    for it in items(c.tab.stack[i]):
      if filterSym(it):
        SuggestWriteln(SymToStr(it, isLocal = i > ModuleTablePos, sectionSuggest))
        inc outputs

proc suggestFieldAccess(c: PContext, n: PNode, outputs: var int) =
  # special code that deals with ``myObj.``. `n` is NOT the nkDotExpr-node, but
  # ``myObj``.
  var typ = n.Typ
  if typ == nil:
    # a module symbol has no type for example:
    if n.kind == nkSym and n.sym.kind == skModule: 
      if n.sym == c.module: 
        # all symbols accessible, because we are in the current module:
        for it in items(c.tab.stack[ModuleTablePos]): 
          if filterSym(it): 
            SuggestWriteln(SymToStr(it, isLocal=false, sectionSuggest))
            inc outputs
      else: 
        for it in items(n.sym.tab): 
          if filterSym(it): 
            SuggestWriteln(SymToStr(it, isLocal=false, sectionSuggest))
            inc outputs
    else:
      # fallback:
      suggestEverything(c, n, outputs)
  elif typ.kind == tyEnum and n.kind == nkSym and n.sym.kind == skType: 
    # look up if the identifier belongs to the enum:
    var t = typ
    while t != nil: 
      suggestSymList(c, t.n, outputs)
      t = t.sons[0]
    suggestOperations(c, n, typ, outputs)
  else:
    typ = skipTypes(typ, {tyGenericInst, tyVar, tyPtr, tyRef})
    if typ.kind == tyObject: 
      var t = typ
      while true: 
        suggestObject(c, t.n, outputs)
        if t.sons[0] == nil: break 
        t = skipTypes(t.sons[0], {tyGenericInst})
      suggestOperations(c, n, typ, outputs)
    elif typ.kind == tyTuple and typ.n != nil: 
      suggestSymList(c, typ.n, outputs)
      suggestOperations(c, n, typ, outputs)
    else:
      suggestOperations(c, n, typ, outputs)

proc findClosestDot(n: PNode): PNode =
  if n.kind == nkDotExpr and msgs.inCheckpoint(n.info) == cpExact:
    result = n
  else:
    for i in 0.. <safeLen(n):
      result = findClosestDot(n.sons[i])
      if result != nil: return

const
  CallNodes = {nkCall, nkInfix, nkPrefix, nkPostfix, nkCommand, nkCallStrLit}

proc findClosestCall(n: PNode): PNode = 
  if n.kind in callNodes and msgs.inCheckpoint(n.info) == cpExact: 
    result = n
  else:
    for i in 0.. <safeLen(n):
      result = findClosestCall(n.sons[i])
      if result != nil: return

proc isTracked(current: TLineInfo, tokenLen: int): bool =
  # the column of an identifier is at its *end*, so we subtract to get the
  # start of it.
  for i in countup(0, high(checkPoints)):
    if current.fileIndex == checkPoints[i].fileIndex:
      if current.line == checkPoints[i].line:
        let col = checkPoints[i].col
        if col >= current.col-tokenLen and col <= current.col:
          return true

proc findClosestSym(n: PNode): PNode = 
  if n.kind == nkSym and msgs.inCheckpoint(n.info) == cpExact: 
    result = n
  elif n.kind notin {nkNone..nkNilLit}:
    for i in 0.. <sonsLen(n):
      result = findClosestSym(n.sons[i])
      if result != nil: return

proc safeSemExpr(c: PContext, n: PNode): PNode = 
  try:
    result = c.semExpr(c, n)
  except ERecoverableError:
    result = ast.emptyNode

proc fuzzySemCheck(c: PContext, n: PNode): PNode = 
  result = safeSemExpr(c, n)
  if result == nil or result.kind == nkEmpty:
    result = newNodeI(n.kind, n.info)
    if n.kind notin {nkNone..nkNilLit}:
      for i in 0 .. < sonsLen(n): result.addSon(fuzzySemCheck(c, n.sons[i]))

var
  usageSym*: PSym
  lastLineInfo: TLineInfo

proc findUsages(node: PNode, s: PSym) =
  if usageSym == nil and isTracked(node.info, s.name.s.len):
    usageSym = s
    SuggestWriteln(SymToStr(s, isLocal=false, sectionUsage))
  elif s == usageSym:
    if lastLineInfo != node.info:
      SuggestWriteln(SymToStr(s, isLocal=false, sectionUsage, node.info))
    lastLineInfo = node.info

proc findDefinition(node: PNode, s: PSym) =
  if isTracked(node.info, s.name.s.len):
    SuggestWriteln(SymToStr(s, isLocal=false, sectionDef))
    SuggestQuit()

proc suggestSym*(n: PNode, s: PSym) {.inline.} =
  ## misnamed: should be 'symDeclared'
  if optUsages in gGlobalOptions:
    findUsages(n, s)
  if optDef in gGlobalOptions:
    findDefinition(n, s)

proc markUsed(n: PNode, s: PSym) =
  incl(s.flags, sfUsed)
  if {sfDeprecated, sfError} * s.flags != {}:
    if sfDeprecated in s.flags: Message(n.info, warnDeprecated, s.name.s)
    if sfError in s.flags: LocalError(n.info, errWrongSymbolX, s.name.s)
  suggestSym(n, s)

proc useSym*(sym: PSym): PNode =
  result = newSymNode(sym)
  markUsed(result, sym)

proc suggestExpr*(c: PContext, node: PNode) = 
  var cp = msgs.inCheckpoint(node.info)
  if cp == cpNone: return
  var outputs = 0
  # This keeps semExpr() from coming here recursively:
  if c.InCompilesContext > 0: return
  inc(c.InCompilesContext)
  
  if optSuggest in gGlobalOptions:
    var n = findClosestDot(node)
    if n == nil: n = node
    else: cp = cpExact
    if n.kind == nkDotExpr and cp == cpExact:
      var obj = safeSemExpr(c, n.sons[0])
      suggestFieldAccess(c, obj, outputs)
    else:
      #debug n
      suggestEverything(c, n, outputs)
  
  if optContext in gGlobalOptions:
    var n = findClosestCall(node)
    if n == nil: n = node
    else: cp = cpExact
    
    if n.kind in CallNodes:
      var a = copyNode(n)
      var x = safeSemExpr(c, n.sons[0])
      if x.kind == nkEmpty or x.typ == nil: x = n.sons[0]
      addSon(a, x)
      for i in 1..sonsLen(n)-1:
        # use as many typed arguments as possible:
        var x = safeSemExpr(c, n.sons[i])
        if x.kind == nkEmpty or x.typ == nil: break
        addSon(a, x)
      suggestCall(c, a, n, outputs)
  
  dec(c.InCompilesContext)
  if outputs > 0 and optUsages notin gGlobalOptions: SuggestQuit()

proc suggestStmt*(c: PContext, n: PNode) = 
  suggestExpr(c, n)

proc findSuggest*(c: PContext, n: PNode) = 
  if n == nil: return
  suggestExpr(c, n)
  for i in 0.. <safeLen(n):
    findSuggest(c, n.sons[i])
