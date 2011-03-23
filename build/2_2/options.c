/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY44019 TY44019;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY44013 TY44013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY10802 TY10802;
typedef struct TY10818 TY10818;
typedef struct TY11196 TY11196;
typedef struct TY10814 TY10814;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY46008 TY46008;
typedef struct TY39221 TY39221;
typedef struct TY38537 TY38537;
typedef struct TY44015 TY44015;
typedef struct TNimObject TNimObject;
typedef struct E_Base E_Base;
typedef struct TSafePoint TSafePoint;
typedef struct TY46006 TY46006;
typedef struct TY46004 TY46004;
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TY44019 {
TNimType* m_type;
TY44013* Head;
TY44013* Tail;
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
struct TY10802 {
NI Refcount;
TNimType* Typ;
};
struct TY10818 {
NI Len;
NI Cap;
TY10802** D;
};
struct TY10814 {
NI Counter;
NI Max;
TY10810* Head;
TY10810** Data;
};
struct TY11194 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY11196 {
TY10818 Zct;
TY10818 Decstack;
TY10814 Cycleroots;
TY10818 Tempstack;
TY11194 Stat;
};
typedef NimStringDesc* TY47337[1];
struct TY38537 {
NimStringDesc* Head;
NimStringDesc* Tail;
};
struct TNimObject {
TNimType* m_type;
};
struct TY44013 {
  TNimObject Sup;
TY44013* Prev;
TY44013* Next;
};
struct TY44015 {
  TY44013 Sup;
NimStringDesc* Data;
};
typedef NimStringDesc* TY49015[4];
typedef NimStringDesc* TY74026[3];
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
typedef NI TY8814[8];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY46004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY46008 {
  TNimObject Sup;
NI Counter;
TY46006* Data;
NU8 Mode;
};
struct TY39221 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY46006 {
  TGenericSeq Sup;
  TY46004 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14404, NI Len_14405);
N_NIMCALL(TY46008*, Newstringtable_46019)(NimStringDesc** Keyvaluepairs_46022, NI Keyvaluepairs_46022Len0, NU8 Mode_46023);
N_NIMCALL(void, nosSplitPath)(NimStringDesc* Path_38536, TY38537* Result);
N_NIMCALL(NimStringDesc*, nosgetAppDir)(void);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* S_2328, NI First_2329, NI Last_2330);
N_NIMCALL(NimStringDesc*, Rawfindfile_47285)(NimStringDesc* F_47287);
N_NIMCALL(NIM_BOOL, nosexistsFile)(NimStringDesc* Filename_37003);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_38403, NimStringDesc* Tail_38404);
N_NIMCALL(NimStringDesc*, nsuToLowerStr)(NimStringDesc* S_24450);
N_NIMCALL(NimStringDesc*, Shortendir_47201)(NimStringDesc* Dir_47203);
N_NIMCALL(NimStringDesc*, Getprefixdir_47114)(void);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18689);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25853, NimStringDesc* Prefix_25854);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nosgetCurrentDir)(void);
N_NIMCALL(NimStringDesc*, nosJoinPathOpenArray)(NimStringDesc** Parts_38451, NI Parts_38451Len0);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_38820, NimStringDesc* Ext_38821);
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_47212)(NimStringDesc* Path_47214);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035);
N_NIMCALL(void, noscreateDir)(NimStringDesc* Dir_40803);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_19003, NI Elemsize_19004, NI Newlen_19005);
N_NIMCALL(NimStringDesc*, Get_46029)(TY46008* T_46031, NimStringDesc* Key_46032);
N_NIMCALL(void, Put_46024)(TY46008* T_46026, NimStringDesc* Key_46027, NimStringDesc* Val_46028);
N_NIMCALL(NIM_BOOL, Haskey_46033)(TY46008* T_46035, NimStringDesc* Key_46036);
N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* A_24587, NimStringDesc* B_24588);
static N_INLINE(void, Writeln_47266)(FILE* F_47269, NimStringDesc* X_47270);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
NIM_CONST NU32 Checksoptions_47079 = 1022;
STRING_LITERAL(TMP47094, "", 0);
STRING_LITERAL(TMP197646, "nimcache", 8);
STRING_LITERAL(TMP197658, "cannot create directory: ", 25);
STRING_LITERAL(TMP199565, "\012", 1);
NU32 Goptions_47082;
NU32 Gglobaloptions_47084;
NI8 Gexitcode_47085;
TY44019 Searchpaths_47086;
extern TNimType* NTI44019; /* TLinkedList */
NimStringDesc* Outfile_47087;
extern TY11196 Gch_11214;
NimStringDesc* Gindexfile_47088;
NU8 Gcmd_47089;
NI Gverbosity_47090;
NI Gnumberofprocessors_47091;
TY46008* Gconfigvars_47116;
NimStringDesc* Libpath_47117;
NimStringDesc* Projectpath_47118;
NIM_BOOL Gkeepcomments_47119;
TY39221* Gimplicitmods_47136;
extern TNimType* NTI39221; /* seq[string] */
extern TSafePoint* excHandler;
extern TNimType* NTI422; /* EOS */
extern E_Base* Currexception_5032;
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI64)((NU64)(((NI) (Usr_11614))) - (NU64)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603) {
Addzct_11601(&Gch_11214.Zct, C_12603);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13218, void* Src_13219) {
TY10802* C_13220;
NI LOC4;
TY10802* C_13222;
NI LOC9;
if (!!((Src_13219 == NIM_NIL))) goto LA2;
C_13220 = 0;
C_13220 = Usrtocell_11612(Src_13219);
LOC4 = Atomicinc_3221(&(*C_13220).Refcount, 8);
LA2: ;
if (!!(((*Dest_13218) == NIM_NIL))) goto LA6;
C_13222 = 0;
C_13222 = Usrtocell_11612((*Dest_13218));
LOC9 = Atomicdec_3226(&(*C_13222).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12601(C_13222);
LA10: ;
LA6: ;
(*Dest_13218) = Src_13219;
}
N_NIMCALL(NimStringDesc*, Getprefixdir_47114)(void) {
NimStringDesc* Result_47200;
NimStringDesc* LOC1;
TY38537 LOC2;
Result_47200 = 0;
Result_47200 = NIM_NIL;
LOC1 = 0;
LOC1 = nosgetAppDir();
memset((void*)&LOC2, 0, sizeof(LOC2));
nosSplitPath(LOC1, &LOC2);
Result_47200 = copyString(LOC2.Head);
return Result_47200;
}
N_NIMCALL(NimStringDesc*, Removetrailingdirsep_47212)(NimStringDesc* Path_47214) {
NimStringDesc* Result_47215;
NIM_BOOL LOC2;
Result_47215 = 0;
Result_47215 = NIM_NIL;
LOC2 = (0 < Path_47214->Sup.len);
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(Path_47214->data[(NI64)(Path_47214->Sup.len - 1)]) == (NU8)(47));
LA3: ;
if (!LOC2) goto LA4;
Result_47215 = copyStrLast(Path_47214, 0, (NI64)(Path_47214->Sup.len - 2));
goto LA1;
LA4: ;
Result_47215 = copyString(Path_47214);
LA1: ;
return Result_47215;
}
N_NIMCALL(NimStringDesc*, Rawfindfile_47285)(NimStringDesc* F_47287) {
NimStringDesc* Result_47288;
NIM_BOOL LOC2;
NimStringDesc* It_47289;
TY44015* It_47291;
NIM_BOOL LOC7;
Result_47288 = 0;
It_47289 = 0;
It_47291 = 0;
Result_47288 = NIM_NIL;
LOC2 = nosexistsFile(F_47287);
if (!LOC2) goto LA3;
Result_47288 = copyString(F_47287);
goto LA1;
LA3: ;
It_47289 = NIM_NIL;
It_47291 = NIM_NIL;
It_47291 = ((TY44015*) (Searchpaths_47086.Head));
while (1) {
if (!!((It_47291 == NIM_NIL))) goto LA5;
It_47289 = (*It_47291).Data;
Result_47288 = nosJoinPath(It_47289, F_47287);
LOC7 = nosexistsFile(Result_47288);
if (!LOC7) goto LA8;
goto BeforeRet;
LA8: ;
It_47291 = ((TY44015*) ((*It_47291).Sup.Next));
} LA5: ;
Result_47288 = copyString(((NimStringDesc*) &TMP47094));
LA1: ;
BeforeRet: ;
return Result_47288;
}
N_NIMCALL(NimStringDesc*, Findfile_47095)(NimStringDesc* F_47097) {
NimStringDesc* Result_47295;
NimStringDesc* LOC4;
Result_47295 = 0;
Result_47295 = NIM_NIL;
Result_47295 = Rawfindfile_47285(F_47097);
if (!(Result_47295->Sup.len == 0)) goto LA2;
LOC4 = 0;
LOC4 = nsuToLowerStr(F_47097);
Result_47295 = Rawfindfile_47285(LOC4);
LA2: ;
return Result_47295;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18799, NimStringDesc* Src_18800) {
memcpy(((NCSTRING) (&(*Dest_18799).data[((*Dest_18799).Sup.len)-0])), ((NCSTRING) ((*Src_18800).data)), ((int) ((NI64)((NI64)((*Src_18800).Sup.len + 1) * 1))));
(*Dest_18799).Sup.len += (*Src_18800).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18816, NIM_CHAR C_18817) {
(*Dest_18816).data[((*Dest_18816).Sup.len)-0] = C_18817;
(*Dest_18816).data[((NI64)((*Dest_18816).Sup.len + 1))-0] = 0;
(*Dest_18816).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Shortendir_47201)(NimStringDesc* Dir_47203) {
NimStringDesc* Result_47204;
NimStringDesc* Prefix_47205;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
NimStringDesc* LOC8;
NIM_BOOL LOC10;
NimStringDesc* LOC13;
NIM_BOOL LOC15;
Result_47204 = 0;
Prefix_47205 = 0;
Result_47204 = NIM_NIL;
Prefix_47205 = NIM_NIL;
LOC1 = 0;
LOC2 = 0;
LOC2 = Getprefixdir_47114();
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendString(LOC1, LOC2);
appendChar(LOC1, 47);
Prefix_47205 = LOC1;
LOC4 = nsuStartsWith(Dir_47203, Prefix_47205);
if (!LOC4) goto LA5;
Result_47204 = copyStr(Dir_47203, Prefix_47205->Sup.len);
goto BeforeRet;
LA5: ;
LOC7 = 0;
LOC8 = 0;
LOC8 = nosgetCurrentDir();
LOC7 = rawNewString(LOC8->Sup.len + 1);
appendString(LOC7, LOC8);
appendChar(LOC7, 47);
Prefix_47205 = LOC7;
LOC10 = nsuStartsWith(Dir_47203, Prefix_47205);
if (!LOC10) goto LA11;
Result_47204 = copyStr(Dir_47203, Prefix_47205->Sup.len);
goto BeforeRet;
LA11: ;
LOC13 = 0;
LOC13 = rawNewString(Projectpath_47118->Sup.len + 1);
appendString(LOC13, Projectpath_47118);
appendChar(LOC13, 47);
Prefix_47205 = LOC13;
LOC15 = nsuStartsWith(Dir_47203, Prefix_47205);
if (!LOC15) goto LA16;
Result_47204 = copyStr(Dir_47203, Prefix_47205->Sup.len);
goto BeforeRet;
LA16: ;
Result_47204 = copyString(Dir_47203);
BeforeRet: ;
return Result_47204;
}
N_NIMCALL(NimStringDesc*, Togeneratedfile_47110)(NimStringDesc* Path_47112, NimStringDesc* Ext_47113) {
NimStringDesc* Result_47232;
TY38537 LOC1;
NimStringDesc* Head_47233;
NimStringDesc* Tail_47234;
NimStringDesc* LOC5;
TY49015 LOC6;
Result_47232 = 0;
Head_47233 = 0;
Tail_47234 = 0;
Result_47232 = NIM_NIL;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(Path_47112, &LOC1);
Head_47233 = NIM_NIL;
Head_47233 = copyString(LOC1.Head);
Tail_47234 = NIM_NIL;
Tail_47234 = copyString(LOC1.Tail);
if (!(0 < Head_47233->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_47233->Sup.len + 1);
appendString(LOC5, Head_47233);
appendChar(LOC5, 47);
Head_47233 = Shortendir_47201(LOC5);
LA3: ;
memset((void*)&LOC6, 0, sizeof(LOC6));
LOC6[0] = copyString(Projectpath_47118);
LOC6[1] = copyString(((NimStringDesc*) &TMP197646));
LOC6[2] = copyString(Head_47233);
LOC6[3] = nosChangeFileExt(Tail_47234, Ext_47113);
Result_47232 = nosJoinPathOpenArray(LOC6, 4);
return Result_47232;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035) {
(*S_5035).prev = excHandler;
excHandler = S_5035;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20604;
Result_20604 = 0;
Result_20604 = NIM_NIL;
Result_20604 = Currexception_5032;
return Result_20604;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618) {
NIM_BOOL Result_11619;
Result_11619 = 0;
Result_11619 = !((((*(*C_11618).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11619;
}
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254) {
Incl_11080(&Gch_11214.Cycleroots, C_12254);
}
static N_INLINE(void, Incref_13202)(TY10802* C_13204) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13204).Refcount, 8);
LOC3 = Canbecycleroot_11616(C_13204);
if (!LOC3) goto LA4;
Rtladdcycleroot_12252(C_13204);
LA4: ;
}
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU64)(LOC2) < (NU64)(8))) goto LA3;
Rtladdzct_12601(C_13003);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11616(C_13003);
if (!LOC5) goto LA6;
Rtladdcycleroot_12252(C_13003);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215) {
TY10802* LOC4;
TY10802* LOC8;
if (!!((Src_13215 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11612(Src_13215);
Incref_13202(LOC4);
LA2: ;
if (!!(((*Dest_13214) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11612((*Dest_13214));
Decref_13001(LOC8);
LA6: ;
(*Dest_13214) = Src_13215;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5032, (*Currexception_5032).parent);
}
N_NIMCALL(NimStringDesc*, Completegeneratedfilepath_47106)(NimStringDesc* F_47108, NIM_BOOL Createsubdir_47109) {
NimStringDesc* Result_47249;
TY38537 LOC1;
NimStringDesc* Head_47250;
NimStringDesc* Tail_47251;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
NimStringDesc* Subdir_47262;
TY74026 LOC7;
TSafePoint TMP197657;
NimStringDesc* LOC11;
Result_47249 = 0;
Head_47250 = 0;
Tail_47251 = 0;
Subdir_47262 = 0;
Result_47249 = NIM_NIL;
memset((void*)&LOC1, 0, sizeof(LOC1));
nosSplitPath(F_47108, &LOC1);
Head_47250 = NIM_NIL;
Head_47250 = copyString(LOC1.Head);
Tail_47251 = NIM_NIL;
Tail_47251 = copyString(LOC1.Tail);
if (!(0 < Head_47250->Sup.len)) goto LA3;
LOC5 = 0;
LOC5 = rawNewString(Head_47250->Sup.len + 1);
appendString(LOC5, Head_47250);
appendChar(LOC5, 47);
LOC6 = 0;
LOC6 = Shortendir_47201(LOC5);
Head_47250 = Removetrailingdirsep_47212(LOC6);
LA3: ;
Subdir_47262 = NIM_NIL;
memset((void*)&LOC7, 0, sizeof(LOC7));
LOC7[0] = copyString(Projectpath_47118);
LOC7[1] = copyString(((NimStringDesc*) &TMP197646));
LOC7[2] = copyString(Head_47250);
Subdir_47262 = nosJoinPathOpenArray(LOC7, 3);
if (!Createsubdir_47109) goto LA9;
pushSafePoint(&TMP197657);
TMP197657.status = setjmp(TMP197657.context);
if (TMP197657.status == 0) {
noscreateDir(Subdir_47262);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI422) {
LOC11 = 0;
LOC11 = rawNewString(Subdir_47262->Sup.len + 25);
appendString(LOC11, ((NimStringDesc*) &TMP197658));
appendString(LOC11, Subdir_47262);
Writeln_47266(stdout, LOC11);
exit(1);
TMP197657.status = 0;popCurrentException();}
}
if (TMP197657.status != 0) reraiseException();
LA9: ;
Result_47249 = nosJoinPath(Subdir_47262, Tail_47251);
return Result_47249;
}
N_NIMCALL(void, Addimplicitmod_47147)(NimStringDesc* Filename_47149) {
NI Length_47185;
Length_47185 = 0;
Length_47185 = Gimplicitmods_47136->Sup.len;
Gimplicitmods_47136 = (TY39221*) setLengthSeq(&(Gimplicitmods_47136)->Sup, sizeof(NimStringDesc*), (NI64)(Length_47185 + 1));
asgnRefNoCycle((void**) &Gimplicitmods_47136->data[Length_47185], copyString(Filename_47149));
}
N_NIMCALL(NimStringDesc*, Getconfigvar_47140)(NimStringDesc* Key_47142) {
NimStringDesc* Result_47162;
Result_47162 = 0;
Result_47162 = NIM_NIL;
Result_47162 = Get_46029(Gconfigvars_47116, Key_47142);
return Result_47162;
}
N_NIMCALL(void, Setconfigvar_47143)(NimStringDesc* Key_47145, NimStringDesc* Val_47146) {
Put_46024(Gconfigvars_47116, Key_47145, Val_47146);
}
N_NIMCALL(NIM_BOOL, Existsconfigvar_47137)(NimStringDesc* Key_47139) {
NIM_BOOL Result_47158;
Result_47158 = 0;
Result_47158 = Haskey_46033(Gconfigvars_47116, Key_47139);
return Result_47158;
}
N_NIMCALL(NimStringDesc*, Getoutfile_47167)(NimStringDesc* Filename_47169, NimStringDesc* Ext_47170) {
NimStringDesc* Result_47171;
Result_47171 = 0;
Result_47171 = NIM_NIL;
if (!!(((Outfile_47087) && (Outfile_47087)->Sup.len == 0))) goto LA2;
Result_47171 = copyString(Outfile_47087);
goto LA1;
LA2: ;
Result_47171 = nosChangeFileExt(Filename_47169, Ext_47170);
LA1: ;
return Result_47171;
}
N_NIMCALL(NI, Binarystrsearch_47150)(NimStringDesc** X_47153, NI X_47153Len0, NimStringDesc* Y_47154) {
NI Result_47305;
NI A_47306;
NI B_47317;
NI Mid_47320;
NI C_47321;
Result_47305 = 0;
A_47306 = 0;
A_47306 = 0;
B_47317 = 0;
B_47317 = (NI64)(X_47153Len0 - 1);
while (1) {
if (!(A_47306 <= B_47317)) goto LA1;
Mid_47320 = 0;
Mid_47320 = (NI64)((NI64)(A_47306 + B_47317) / 2);
C_47321 = 0;
C_47321 = nsuCmpIgnoreCase(X_47153[Mid_47320], Y_47154);
if (!(C_47321 < 0)) goto LA3;
A_47306 = (NI64)(Mid_47320 + 1);
goto LA2;
LA3: ;
if (!(0 < C_47321)) goto LA5;
B_47317 = (NI64)(Mid_47320 - 1);
goto LA2;
LA5: ;
Result_47305 = Mid_47320;
goto BeforeRet;
LA2: ;
} LA1: ;
Result_47305 = -1;
BeforeRet: ;
return Result_47305;
}
static N_INLINE(void, Writeln_47266)(FILE* F_47269, NimStringDesc* X_47270) {
Write_3866(F_47269, X_47270);
Write_3866(F_47269, ((NimStringDesc*) &TMP199565));
}
N_NOINLINE(void, optionsInit)(void) {
TY47337 LOC1;
Searchpaths_47086.m_type = NTI44019;
Goptions_47082 = 105022;
Gglobaloptions_47084 = 8;
asgnRefNoCycle((void**) &Outfile_47087, copyString(((NimStringDesc*) &TMP47094)));
asgnRefNoCycle((void**) &Gindexfile_47088, copyString(((NimStringDesc*) &TMP47094)));
Gcmd_47089 = ((NU8) 0);
asgnRefNoCycle((void**) &Libpath_47117, copyString(((NimStringDesc*) &TMP47094)));
asgnRefNoCycle((void**) &Projectpath_47118, copyString(((NimStringDesc*) &TMP47094)));
Gkeepcomments_47119 = NIM_TRUE;
asgnRefNoCycle((void**) &Gimplicitmods_47136, (TY39221*) newSeq(NTI39221, 0));
memset((void*)&LOC1, 0, sizeof(LOC1));
asgnRefNoCycle((void**) &Gconfigvars_47116, Newstringtable_46019(LOC1, 0, ((NU8) 2)));
}

