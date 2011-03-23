/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY39019 TY39019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY39013 TY39013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY41008 TY41008;
typedef struct TY35021 TY35021;
typedef struct TY34337 TY34337;
typedef struct TY39015 TY39015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY41006 TY41006;
typedef struct TY41004 TY41004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10994 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10996 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY10994 Stat;
};
typedef NimStringDesc* TY42337[1];
struct TY34337 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY39015 {
  TY39013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY44015[4];
typedef NimStringDesc* TY70026[3];
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY41004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY41008 {
  TNimObject Sup;
NI Counter;
TY41006* Data;
NU8 Mode;
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY41006 {
  TGenericSeq Sup;
  TY41004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TY41008*, Newstringtable_41019)(NimStringDesc** Keyvaluepairs_41022, NI Keyvaluepairs_41022Len0, NU8 Mode_41023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_34336, TY34337* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, Rawfindfile_42285)(NimStringDesc* F_42287);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_32803);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24450);
N_NIMCALL(NimStringDesc*, Shortendir_42201)(NimStringDesc* Dir_42203);
N_NIMCALL(NimStringDesc*, Getprefixdir_42114)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25853, NimStringDesc* Prefix_25854);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_34251, NI Parts_34251Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_34620, NimStringDesc* Ext_34621);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_42212)(NimStringDesc* Path_42214);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_36203);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10880)(TY10614* S_10883, TY10602* Cell_10884);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18803, NI Elemsize_18804, NI Newlen_18805);
N_NIMCALL(NimStringDesc*, Get_41029)(TY41008* T_41031, NimStringDesc* Key_41032);
N_NIMCALL(void, Put_41024)(TY41008* T_41026, NimStringDesc* Key_41027, NimStringDesc* Val_41028);
N_NIMCALL(NIM_BOOL, Haskey_41033)(TY41008* T_41035, NimStringDesc* Key_41036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
static N_INLINE(void, Writeln_42266)(FILE* F_42269, NimStringDesc* X_42270);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
NIM_CONST NU32 Checksoptions_42079 = 1022;
STRING_LITERAL(TMP42094, "", 0);
STRING_LITERAL(TMP193651, "nimcache", 8);
STRING_LITERAL(TMP193663, "cannot create directory: ", 25);
STRING_LITERAL(TMP195563, "\015\012", 2);
NU32 Goptions_42082;
NU32 Gglobaloptions_42084;
NI8 Gexitcode_42085;
TY39019 Searchpaths_42086;
extern TNimType* NTI39019; /* TLinkedList */
NimStringDesc* Outfile_42087;
extern TY10996 Gch_11014;
NimStringDesc* Gindexfile_42088;
NU8 Gcmd_42089;
NI Gverbosity_42090;
NI Gnumberofprocessors_42091;
TY41008* Gconfigvars_42116;
NimStringDesc* Libpath_42117;
NimStringDesc* Projectpath_42118;
NIM_BOOL Gkeepcomments_42119;
TY35021* Gimplicitmods_42136;
extern TNimType* NTI35021; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_5032;
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11014.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3221(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3226(&(*C_13022).Refcount, 8);
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(NimStringDesc*, Getprefixdir_42114)(void) {
NimStringDesc* Result_42200;
NimStringDesc* LOC1;
TY34337 LOC2;
Result_42200 = 0;
Result_42200 = NIM_NIL;
LOC1 = 0;
LOC1 = nosgetAppDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_42200 = copyString(LOC2.Head);
return Result_42200;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_42212)(NimStringDesc* Path_42214) {
NimStringDesc* Result_42215;
NIM_BOOL LOC2;
Result_42215 = 0;
Result_42215 = NIM_NIL;
LOC2 = (0 < Path_42214->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_42214->data[(NI32)(Path_42214->Sup.len - 1)]) == (NU8)(92));
LA3: ;
if (!LOC2) goto LA4;
Result_42215 = copyStrLast(Path_42214, 0, (NI32)(Path_42214->Sup.len - 2));
goto LA1;
LA4: ;
Result_42215 = copyString(Path_42214);
LA1: ;
return Result_42215;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_42285)(NimStringDesc* F_42287) {
NimStringDesc* Result_42288;
NIM_BOOL LOC2;
NimStringDesc* It_42289;
TY39015* It_42291;
NIM_BOOL LOC7;
Result_42288 = 0;
It_42289 = 0;
It_42291 = 0;
Result_42288 = NIM_NIL;
LOC2 = nosexistsFile(F_42287);
if (!LOC2) goto LA3;
Result_42288 = copyString(F_42287);
goto LA1;
LA3: ;
It_42289 = NIM_NIL;
It_42291 = NIM_NIL;
It_42291 = ((TY39015*) (Searchpaths_42086.Head));
while (1) {
if (!!((It_42291 == NIM_NIL))) goto LA5;
It_42289 = (*It_42291).Data;
Result_42288 = nosJoinPath(It_42289, F_42287);
LOC7 = nosexistsFile(Result_42288);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_42291 = ((TY39015*) ((*It_42291).Sup.Next));
} LA5: ;
Result_42288 = copyString(((NimStringDesc*) &TMP42094));
LA1: ;
BeforeRet: ;
return Result_42288;
}
N_NIMCALL(NimStringDesc*, Findfile_42095)(NimStringDesc* F_42097) {
NimStringDesc* Result_42295;
NimStringDesc* LOC4;
Result_42295 = 0;
Result_42295 = NIM_NIL;
Result_42295 = Rawfindfile_42285(F_42097);
if (!(Result_42295->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_42097);
Result_42295 = Rawfindfile_42285(LOC4);
LA2: ;
return Result_42295;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI32)((NI32)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI32)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_42201)(NimStringDesc* Dir_42203) {
NimStringDesc* Result_42204;
NimStringDesc* Prefix_42205;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_42204 = 0;
Prefix_42205 = 0;
Result_42204 = NIM_NIL;
Prefix_42205 = NIM_NIL;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_42114();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 92);
Prefix_42205 = LOC1;
LOC4 = nsuStartsWith(Dir_42203, Prefix_42205);
if (!LOC4) goto LA5;
Result_42204 = copyStr(Dir_42203, Prefix_42205->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 92);
Prefix_42205 = LOC7;
LOC10 = nsuStartsWith(Dir_42203, Prefix_42205);
if (!LOC10) goto LA11;
Result_42204 = copyStr(Dir_42203, Prefix_42205->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_42118->Sup.len + 1);
appendString(LOC13, Projectpath_42118);
appendChar(LOC13, 92);
Prefix_42205 = LOC13;
LOC15 = nsuStartsWith(Dir_42203, Prefix_42205);
if (!LOC15) goto LA16;
Result_42204 = copyStr(Dir_42203, Prefix_42205->Sup.len);
goto BeforeRet;
LA16: ;
Result_42204 = copyString(Dir_42203);
BeforeRet: ;
return Result_42204;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_42110)(NimStringDesc* Path_42112, NimStringDesc* Ext_42113) {
NimStringDesc* Result_42232;
TY34337 LOC1;
NimStringDesc* Head_42233;
NimStringDesc* Tail_42234;
NimStringDesc* LOC5;
TY44015 LOC6;
Result_42232 = 0;
Head_42233 = 0;
Tail_42234 = 0;
Result_42232 = NIM_NIL;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_42112, &LOC1);
Head_42233 = NIM_NIL;
Head_42233 = copyString(LOC1.Head);
Tail_42234 = NIM_NIL;
Tail_42234 = copyString(LOC1.Tail);
if (!(0 < Head_42233->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_42233->Sup.len + 1);
appendString(LOC5, Head_42233);
appendChar(LOC5, 92);
Head_42233 = Shortendir_42201(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_42118);
LOC6[1] = copyString(((NimStringDesc*) &TMP193651));
LOC6[2] = copyString(Head_42233);
LOC6[3] = nosChangeFileExt(Tail_42234, Ext_42113);
Result_42232 = nosJoinPathOpenArray(LOC6, 4);
return Result_42232;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035) {
(*S_5035).prev = excHandler;
excHandler = S_5035;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20404;
Result_20404 = 0;
Result_20404 = NIM_NIL;
Result_20404 = Currexception_5032;
return Result_20404;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418) {
NIM_BOOL Result_11419;
Result_11419 = 0;
Result_11419 = !((((*(*C_11418).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11419;
}
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054) {
Incl_10880(&Gch_11014.Cycleroots, C_12054);
}
static N_INLINE(void, Incref_13002)(TY10602* C_13004) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13004).Refcount, 8);
LOC3 = Canbecycleroot_11416(C_13004);
if (!LOC3) goto LA4;
Rtladdcycleroot_12052(C_13004);
LA4: ;
}
static N_INLINE(void, Decref_12801)(TY10602* C_12803) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_12803).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12401(C_12803);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11416(C_12803);
if (!LOC5) goto LA6;
Rtladdcycleroot_12052(C_12803);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015) {
TY10602* LOC4;
TY10602* LOC8;
if (!!((Src_13015 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11412(Src_13015);
Incref_13002(LOC4);
LA2: ;
if (!!(((*Dest_13014) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11412((*Dest_13014));
Decref_12801(LOC8);
LA6: ;
(*Dest_13014) = Src_13015;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5032, (*Currexception_5032).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_42106)(NimStringDesc* F_42108, NIM_BOOL Createsubdir_42109) {
NimStringDesc* Result_42249;
TY34337 LOC1;
NimStringDesc* Head_42250;
NimStringDesc* Tail_42251;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_42262;
TY70026 LOC7;
TSafePoint TMP193662;
NimStringDesc* LOC11;
Result_42249 = 0;
Head_42250 = 0;
Tail_42251 = 0;
Subdir_42262 = 0;
Result_42249 = NIM_NIL;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_42108, &LOC1);
Head_42250 = NIM_NIL;
Head_42250 = copyString(LOC1.Head);
Tail_42251 = NIM_NIL;
Tail_42251 = copyString(LOC1.Tail);
if (!(0 < Head_42250->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_42250->Sup.len + 1);
appendString(LOC5, Head_42250);
appendChar(LOC5, 92);
LOC6 = 0;
LOC6 = Shortendir_42201(LOC5);
Head_42250 = Removetrailingdirsep_42212(LOC6);
LA3: ;
Subdir_42262 = NIM_NIL;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_42118);
LOC7[1] = copyString(((NimStringDesc*) &TMP193651));
LOC7[2] = copyString(Head_42250);
Subdir_42262 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_42109) goto LA9;
pushSafePoint(&TMP193662);
TMP193662.status = setjmp(TMP193662.context);
if (TMP193662.status == 0) {
noscreateDir(Subdir_42262);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_42262->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP193663));
appendString(LOC11, Subdir_42262);
Writeln_42266(stdout, LOC11);
exit(1);
TMP193662.status = 0;popCurrentException();}
}
if (TMP193662.status != 0) reraiseException();
LA9: ;
Result_42249 = nosJoinPath(Subdir_42262, Tail_42251);
return Result_42249;
}
N_NIMCALL(void, Addimplicitmod_42147)(NimStringDesc* Filename_42149) {
NI Length_42185;
Length_42185 = 0;
Length_42185 = Gimplicitmods_42136->Sup.len;
Gimplicitmods_42136 = (TY35021*) setLengthSeq(&(Gimplicitmods_42136)->Sup, sizeof(NimStringDesc*), (NI32)(Length_42185 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_42136->data[Length_42185], copyString(Filename_42149));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_42140)(NimStringDesc* Key_42142) {
NimStringDesc* Result_42162;
Result_42162 = 0;
Result_42162 = NIM_NIL;
Result_42162 = Get_41029(Gconfigvars_42116, Key_42142);
return Result_42162;
}
N_NIMCALL(void, Setconfigvar_42143)(NimStringDesc* Key_42145, NimStringDesc* Val_42146) {
Put_41024(Gconfigvars_42116, Key_42145, Val_42146);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_42137)(NimStringDesc* Key_42139) {
NIM_BOOL Result_42158;
Result_42158 = 0;
Result_42158 = Haskey_41033(Gconfigvars_42116, Key_42139);
return Result_42158;
}
N_NIMCALL(NimStringDesc*, Getoutfile_42167)(NimStringDesc* Filename_42169, NimStringDesc* Ext_42170) {
NimStringDesc* Result_42171;
Result_42171 = 0;
Result_42171 = NIM_NIL;
if (!!(((Outfile_42087) && (Outfile_42087)->Sup.len == 0))) goto LA2;
Result_42171 = copyString(Outfile_42087);
goto LA1;
LA2: ;
Result_42171 = nosChangeFileExt(Filename_42169, Ext_42170);
LA1: ;
return Result_42171;
}
N_NIMCALL(NI, Binarystrsearch_42150)(NimStringDesc** X_42153, NI X_42153Len0, NimStringDesc* Y_42154) {
NI Result_42305;
NI A_42306;
NI B_42317;
NI Mid_42320;
NI C_42321;
Result_42305 = 0;
A_42306 = 0;
A_42306 = 0;
B_42317 = 0;
B_42317 = (NI32)(X_42153Len0 - 1);
while (1) {
if (!(A_42306 <= B_42317)) goto LA1;
Mid_42320 = 0;
Mid_42320 = (NI32)((NI32)(A_42306 + B_42317) / 2);
C_42321 = 0;
C_42321 = nsuCmpIgnoreCase(X_42153[Mid_42320], Y_42154);
if (!(C_42321 < 0)) goto LA3;
A_42306 = (NI32)(Mid_42320 + 1);
goto LA2;
LA3: ;
if (!(0 < C_42321)) goto LA5;
B_42317 = (NI32)(Mid_42320 - 1);
goto LA2;
LA5: ;
Result_42305 = Mid_42320;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_42305 = -1;
BeforeRet: ;
return Result_42305;
}
static N_INLINE(void, Writeln_42266)(FILE* F_42269, NimStringDesc* X_42270) {
Write_3866(F_42269, X_42270);
Write_3866(F_42269, ((NimStringDesc*) &TMP195563));
}
N_NOINLINE(void, optionsInit)(void) {
TY42337 LOC1;
Searchpaths_42086.m_type = NTI39019;
Goptions_42082 = 105022;
Gglobaloptions_42084 = 8;
asgnRefNoCycle((void**) &Outfile_42087, copyString(((NimStringDesc*) &TMP42094)));
asgnRefNoCycle((void**) &Gindexfile_42088, copyString(((NimStringDesc*) &TMP42094)));
Gcmd_42089 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_42117, copyString(((NimStringDesc*) &TMP42094)));
asgnRefNoCycle((void**) &Projectpath_42118, copyString(((NimStringDesc*) &TMP42094)));
Gkeepcomments_42119 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_42136, (TY35021*) newSeq(NTI35021, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_42116, Newstringtable_41019(LOC1, 0, ((NU8) 2)));
}

