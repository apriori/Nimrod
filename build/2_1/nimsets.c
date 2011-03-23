/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY56526 TY56526;
typedef struct TY56552 TY56552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY48538 TY48538;
typedef struct TY56548 TY56548;
typedef struct TY55011 TY55011;
typedef struct TY56520 TY56520;
typedef struct TY104008 TY104008;
typedef struct TY55005 TY55005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY56550 TY56550;
typedef struct TY56540 TY56540;
typedef struct TY53008 TY53008;
typedef struct TY10802 TY10802;
typedef struct TY10814 TY10814;
typedef struct TY11196 TY11196;
typedef struct TY10818 TY10818;
typedef struct TY10810 TY10810;
typedef struct TY11194 TY11194;
typedef struct TY56530 TY56530;
typedef struct TY56528 TY56528;
typedef struct TY56544 TY56544;
typedef struct TY44013 TY44013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY48538 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY56526 {
TY56552* Typ;
NimStringDesc* Comment;
TY48538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY56548* Sym;
} S4;
struct {TY55011* Ident;
} S5;
struct {TY56520* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct TY55005 {
  TNimObject Sup;
NI Id;
};
struct TY56540 {
NU8 K;
NU8 S;
NU8 Flags;
TY56552* T;
TY53008* R;
NI A;
};
struct TY56552 {
  TY55005 Sup;
NU8 Kind;
TY56550* Sons;
TY56526* N;
NU8 Flags;
NU8 Callconv;
TY56548* Owner;
TY56548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY56540 Loc;
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
struct TY56530 {
TNimType* m_type;
NI Counter;
TY56528* Data;
};
struct TY56548 {
  TY55005 Sup;
NU8 Kind;
NU8 Magic;
TY56552* Typ;
TY55011* Name;
TY48538 Info;
TY56548* Owner;
NU32 Flags;
TY56530 Tab;
TY56526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY56540 Loc;
TY56544* Annex;
};
struct TY55011 {
  TY55005 Sup;
NimStringDesc* S;
TY55011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY53008 {
  TNimObject Sup;
TY53008* Left;
TY53008* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY8814[16];
struct TY10810 {
TY10810* Next;
NI Key;
TY8814 Bits;
};
struct TY44013 {
  TNimObject Sup;
TY44013* Prev;
TY44013* Next;
};
struct TY56544 {
  TY44013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY53008* Name;
TY56526* Path;
};
struct TY56520 {
  TGenericSeq Sup;
  TY56526* data[SEQ_DECL_SIZE];
};
struct TY104008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct TY56550 {
  TGenericSeq Sup;
  TY56552* data[SEQ_DECL_SIZE];
};
struct TY56528 {
  TGenericSeq Sup;
  TY56548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Internalerror_49208)(TY48538 Info_49210, NimStringDesc* Errmsg_49211);
static N_INLINE(NI, Sonslen_56804)(TY56526* N_56806);
N_NIMCALL(NIM_BOOL, Levalue_56865)(TY56526* A_56867, TY56526* B_56868);
N_NIMCALL(NIM_BOOL, Samevalue_56861)(TY56526* A_56863, TY56526* B_56864);
N_NIMCALL(TY56526*, Nodesetop_105697)(TY56526* A_105699, TY56526* B_105700, NU8 Op_105701);
N_NIMCALL(void, Tobitset_105001)(TY56526* S_105003, TY104008** B_105005);
N_NIMCALL(NI64, Firstord_98001)(TY56552* T_98003);
N_NIMCALL(void, Bitsetinit_104010)(TY104008** B_104013, NI Length_104014);
N_NIMCALL(NI64, Getsize_98115)(TY56552* Typ_98117);
N_NIMCALL(NI64, Getordvalue_98109)(TY56526* N_98111);
N_NIMCALL(void, Bitsetincl_104035)(TY104008** X_104038, NI64 Elem_104039);
N_NIMCALL(void, Bitsetunion_104015)(TY104008** X_104018, TY104008* Y_104019);
N_NIMCALL(void, Bitsetdiff_104020)(TY104008** X_104023, TY104008* Y_104024);
N_NIMCALL(void, Bitsetsymdiff_104025)(TY104008** X_104028, TY104008* Y_104029);
N_NIMCALL(void, Bitsetintersect_104030)(TY104008** X_104033, TY104008* Y_104034);
N_NIMCALL(TY56526*, Totreeset_105633)(TY104008* S_105635, TY56552* Settype_105636, TY48538 Info_105637);
N_NIMCALL(TY56526*, Newnodei_56738)(NU8 Kind_56740, TY48538 Info_56741);
static N_INLINE(void, asgnRef)(void** Dest_13214, void* Src_13215);
static N_INLINE(void, Incref_13202)(TY10802* C_13204);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11616)(TY10802* C_11618);
static N_INLINE(void, Rtladdcycleroot_12252)(TY10802* C_12254);
N_NOINLINE(void, Incl_11080)(TY10814* S_11083, TY10802* Cell_11084);
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614);
static N_INLINE(void, Decref_13001)(TY10802* C_13003);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12601)(TY10802* C_12603);
N_NOINLINE(void, Addzct_11601)(TY10818* S_11604, TY10802* C_11605);
N_NIMCALL(NIM_BOOL, Bitsetin_104045)(TY104008* X_104047, NI64 E_104048);
N_NIMCALL(void, Addson_56824)(TY56526* Father_56826, TY56526* Son_56827);
N_NIMCALL(TY56526*, Newinttypenode_56718)(NU8 Kind_56720, NI64 Intval_56721, TY56552* Typ_56722);
N_NIMCALL(NIM_BOOL, Bitsetcontains_104053)(TY104008* X_104055, TY104008* Y_104056);
N_NIMCALL(NIM_BOOL, Bitsetequals_104049)(TY104008* X_104051, TY104008* Y_104052);
STRING_LITERAL(TMP198096, "inSet", 5);
extern TY11196 Gch_11214;
static N_INLINE(NI, Sonslen_56804)(TY56526* N_56806) {
NI Result_57897;
Result_57897 = 0;
if (!(*N_56806).KindU.S6.Sons == 0) goto LA2;
Result_57897 = 0;
goto LA1;
LA2: ;
Result_57897 = (*N_56806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_57897;
}
N_NIMCALL(NIM_BOOL, Inset_105010)(TY56526* S_105012, TY56526* Elem_105013) {
NIM_BOOL Result_105057;
NI I_105090;
NI HEX3Atmp_105172;
NI LOC4;
NI Res_105174;
NIM_BOOL LOC10;
NIM_BOOL LOC15;
Result_105057 = 0;
if (!!(((*S_105012).Kind == ((NU8) 31)))) goto LA2;
Internalerror_49208((*S_105012).Info, ((NimStringDesc*) &TMP198096));
LA2: ;
I_105090 = 0;
HEX3Atmp_105172 = 0;
LOC4 = Sonslen_56804(S_105012);
HEX3Atmp_105172 = (NI32)(LOC4 - 1);
Res_105174 = 0;
Res_105174 = 0;
while (1) {
if (!(Res_105174 <= HEX3Atmp_105172)) goto LA5;
I_105090 = Res_105174;
if (!((*(*S_105012).KindU.S6.Sons->data[I_105090]).Kind == ((NU8) 35))) goto LA7;
LOC10 = Levalue_56865((*(*S_105012).KindU.S6.Sons->data[I_105090]).KindU.S6.Sons->data[0], Elem_105013);
if (!(LOC10)) goto LA11;
LOC10 = Levalue_56865(Elem_105013, (*(*S_105012).KindU.S6.Sons->data[I_105090]).KindU.S6.Sons->data[1]);
LA11: ;
if (!LOC10) goto LA12;
Result_105057 = NIM_TRUE;
goto BeforeRet;
LA12: ;
goto LA6;
LA7: ;
LOC15 = Samevalue_56861((*S_105012).KindU.S6.Sons->data[I_105090], Elem_105013);
if (!LOC15) goto LA16;
Result_105057 = NIM_TRUE;
goto BeforeRet;
LA16: ;
LA6: ;
Res_105174 += 1;
} LA5: ;
Result_105057 = NIM_FALSE;
BeforeRet: ;
return Result_105057;
}
N_NIMCALL(void, Tobitset_105001)(TY56526* S_105003, TY104008** B_105005) {
NI64 First_105524;
NI64 J_105525;
NI64 LOC1;
NI I_105534;
NI HEX3Atmp_105630;
NI LOC2;
NI Res_105632;
NI64 LOC8;
NI64 LOC9;
First_105524 = 0;
J_105525 = 0;
First_105524 = Firstord_98001((*(*S_105003).Typ).Sons->data[0]);
LOC1 = Getsize_98115((*S_105003).Typ);
Bitsetinit_104010(B_105005, ((NI) (LOC1)));
I_105534 = 0;
HEX3Atmp_105630 = 0;
LOC2 = Sonslen_56804(S_105003);
HEX3Atmp_105630 = (NI32)(LOC2 - 1);
Res_105632 = 0;
Res_105632 = 0;
while (1) {
if (!(Res_105632 <= HEX3Atmp_105630)) goto LA3;
I_105534 = Res_105632;
if (!((*(*S_105003).KindU.S6.Sons->data[I_105534]).Kind == ((NU8) 35))) goto LA5;
J_105525 = Getordvalue_98109((*(*S_105003).KindU.S6.Sons->data[I_105534]).KindU.S6.Sons->data[0]);
while (1) {
LOC8 = Getordvalue_98109((*(*S_105003).KindU.S6.Sons->data[I_105534]).KindU.S6.Sons->data[1]);
if (!(J_105525 <= LOC8)) goto LA7;
Bitsetincl_104035(B_105005, (NI64)(J_105525 - First_105524));
J_105525 += 1;
} LA7: ;
goto LA4;
LA5: ;
LOC9 = Getordvalue_98109((*S_105003).KindU.S6.Sons->data[I_105534]);
Bitsetincl_104035(B_105005, (NI64)(LOC9 - First_105524));
LA4: ;
Res_105632 += 1;
} LA3: ;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
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
static N_INLINE(TY10802*, Usrtocell_11612)(void* Usr_11614) {
TY10802* Result_11615;
Result_11615 = 0;
Result_11615 = ((TY10802*) ((NI32)((NU32)(((NI) (Usr_11614))) - (NU32)(((NI) (((NI)sizeof(TY10802))))))));
return Result_11615;
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
static N_INLINE(void, Decref_13001)(TY10802* C_13003) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_13003).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
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
N_NIMCALL(TY56526*, Totreeset_105633)(TY104008* S_105635, TY56552* Settype_105636, TY48538 Info_105637) {
TY56526* Result_105638;
NI64 A_105639;
NI64 B_105640;
NI64 E_105641;
NI64 First_105642;
TY56552* Elemtype_105643;
TY56526* N_105644;
NIM_BOOL LOC3;
NIM_BOOL LOC8;
NIM_BOOL LOC10;
TY56526* LOC16;
TY56526* LOC17;
TY56526* LOC18;
Result_105638 = 0;
Elemtype_105643 = 0;
N_105644 = 0;
Result_105638 = NIM_NIL;
A_105639 = 0;
B_105640 = 0;
E_105641 = 0;
First_105642 = 0;
Elemtype_105643 = NIM_NIL;
N_105644 = NIM_NIL;
Elemtype_105643 = (*Settype_105636).Sons->data[0];
First_105642 = Firstord_98001(Elemtype_105643);
Result_105638 = Newnodei_56738(((NU8) 31), Info_105637);
asgnRef((void**) &(*Result_105638).Typ, Settype_105636);
(*Result_105638).Info = Info_105637;
E_105641 = 0;
while (1) {
if (!(E_105641 < ((NI64) ((NI32)((S_105635->Sup.len-1) * 8))))) goto LA1;
LOC3 = Bitsetin_104045(S_105635, E_105641);
if (!LOC3) goto LA4;
A_105639 = E_105641;
B_105640 = E_105641;
while (1) {
B_105640 += 1;
LOC8 = (((NI64) ((NI32)((S_105635->Sup.len-1) * 8))) < B_105640);
if (LOC8) goto LA9;
LOC10 = Bitsetin_104045(S_105635, B_105640);
LOC8 = !(LOC10);
LA9: ;
if (!LOC8) goto LA11;
goto LA6;
LA11: ;
} LA6: ;
B_105640 -= 1;
if (!(A_105639 == B_105640)) goto LA14;
LOC16 = 0;
LOC16 = Newinttypenode_56718(((NU8) 6), (NI64)(A_105639 + First_105642), Elemtype_105643);
Addson_56824(Result_105638, LOC16);
goto LA13;
LA14: ;
N_105644 = Newnodei_56738(((NU8) 35), Info_105637);
asgnRef((void**) &(*N_105644).Typ, Elemtype_105643);
LOC17 = 0;
LOC17 = Newinttypenode_56718(((NU8) 6), (NI64)(A_105639 + First_105642), Elemtype_105643);
Addson_56824(N_105644, LOC17);
LOC18 = 0;
LOC18 = Newinttypenode_56718(((NU8) 6), (NI64)(B_105640 + First_105642), Elemtype_105643);
Addson_56824(N_105644, LOC18);
Addson_56824(Result_105638, N_105644);
LA13: ;
E_105641 = B_105640;
LA4: ;
E_105641 += 1;
} LA1: ;
return Result_105638;
}
N_NIMCALL(TY56526*, Nodesetop_105697)(TY56526* A_105699, TY56526* B_105700, NU8 Op_105701) {
TY56526* Result_105702;
TY104008* X_105703;
TY104008* Y_105704;
Result_105702 = 0;
X_105703 = 0;
Y_105704 = 0;
Result_105702 = NIM_NIL;
X_105703 = NIM_NIL;
Y_105704 = NIM_NIL;
Tobitset_105001(A_105699, &X_105703);
Tobitset_105001(B_105700, &Y_105704);
switch (Op_105701) {
case ((NU8) 0):
Bitsetunion_104015(&X_105703, Y_105704);
break;
case ((NU8) 1):
Bitsetdiff_104020(&X_105703, Y_105704);
break;
case ((NU8) 2):
Bitsetsymdiff_104025(&X_105703, Y_105704);
break;
case ((NU8) 3):
Bitsetintersect_104030(&X_105703, Y_105704);
break;
}
Result_105702 = Totreeset_105633(X_105703, (*A_105699).Typ, (*A_105699).Info);
return Result_105702;
}
N_NIMCALL(TY56526*, Diffsets_105030)(TY56526* A_105032, TY56526* B_105033) {
TY56526* Result_105720;
Result_105720 = 0;
Result_105720 = NIM_NIL;
Result_105720 = Nodesetop_105697(A_105032, B_105033, ((NU8) 1));
return Result_105720;
}
N_NIMCALL(NI64, Cardset_105050)(TY56526* S_105052) {
NI64 Result_105752;
NI I_105761;
NI HEX3Atmp_105843;
NI LOC1;
NI Res_105845;
NI64 LOC6;
NI64 LOC7;
Result_105752 = 0;
Result_105752 = 0;
I_105761 = 0;
HEX3Atmp_105843 = 0;
LOC1 = Sonslen_56804(S_105052);
HEX3Atmp_105843 = (NI32)(LOC1 - 1);
Res_105845 = 0;
Res_105845 = 0;
while (1) {
if (!(Res_105845 <= HEX3Atmp_105843)) goto LA2;
I_105761 = Res_105845;
if (!((*(*S_105052).KindU.S6.Sons->data[I_105761]).Kind == ((NU8) 35))) goto LA4;
LOC6 = Getordvalue_98109((*(*S_105052).KindU.S6.Sons->data[I_105761]).KindU.S6.Sons->data[1]);
LOC7 = Getordvalue_98109((*(*S_105052).KindU.S6.Sons->data[I_105761]).KindU.S6.Sons->data[0]);
Result_105752 = (NI64)((NI64)((NI64)(Result_105752 + LOC6) - LOC7) + 1);
goto LA3;
LA4: ;
Result_105752 += 1;
LA3: ;
Res_105845 += 1;
} LA2: ;
return Result_105752;
}
N_NIMCALL(NIM_BOOL, Containssets_105042)(TY56526* A_105044, TY56526* B_105045) {
NIM_BOOL Result_105735;
TY104008* X_105736;
TY104008* Y_105737;
X_105736 = 0;
Y_105737 = 0;
Result_105735 = 0;
X_105736 = NIM_NIL;
Y_105737 = NIM_NIL;
Tobitset_105001(A_105044, &X_105736);
Tobitset_105001(B_105045, &Y_105737);
Result_105735 = Bitsetcontains_104053(X_105736, Y_105737);
return Result_105735;
}
N_NIMCALL(NIM_BOOL, Equalsets_105046)(TY56526* A_105048, TY56526* B_105049) {
NIM_BOOL Result_105744;
TY104008* X_105745;
TY104008* Y_105746;
X_105745 = 0;
Y_105746 = 0;
Result_105744 = 0;
X_105745 = NIM_NIL;
Y_105746 = NIM_NIL;
Tobitset_105001(A_105048, &X_105745);
Tobitset_105001(B_105049, &Y_105746);
Result_105744 = Bitsetequals_104049(X_105745, Y_105746);
return Result_105744;
}
N_NIMCALL(TY56526*, Intersectsets_105034)(TY56526* A_105036, TY56526* B_105037) {
TY56526* Result_105725;
Result_105725 = 0;
Result_105725 = NIM_NIL;
Result_105725 = Nodesetop_105697(A_105036, B_105037, ((NU8) 3));
return Result_105725;
}
N_NIMCALL(TY56526*, Unionsets_105026)(TY56526* A_105028, TY56526* B_105029) {
TY56526* Result_105715;
Result_105715 = 0;
Result_105715 = NIM_NIL;
Result_105715 = Nodesetop_105697(A_105028, B_105029, ((NU8) 0));
return Result_105715;
}
N_NIMCALL(TY56526*, Symdiffsets_105038)(TY56526* A_105040, TY56526* B_105041) {
TY56526* Result_105730;
Result_105730 = 0;
Result_105730 = NIM_NIL;
Result_105730 = Nodesetop_105697(A_105040, B_105041, ((NU8) 2));
return Result_105730;
}
N_NIMCALL(NIM_BOOL, Overlap_105006)(TY56526* A_105008, TY56526* B_105009) {
NIM_BOOL Result_105179;
NIM_BOOL LOC7;
NIM_BOOL LOC8;
NIM_BOOL LOC11;
NIM_BOOL LOC13;
NIM_BOOL LOC18;
Result_105179 = 0;
if (!((*A_105008).Kind == ((NU8) 35))) goto LA2;
if (!((*B_105009).Kind == ((NU8) 35))) goto LA5;
LOC8 = Levalue_56865((*A_105008).KindU.S6.Sons->data[0], (*B_105009).KindU.S6.Sons->data[1]);
if (!(LOC8)) goto LA9;
LOC8 = Levalue_56865((*B_105009).KindU.S6.Sons->data[1], (*A_105008).KindU.S6.Sons->data[1]);
LA9: ;
LOC7 = LOC8;
if (LOC7) goto LA10;
LOC11 = Levalue_56865((*A_105008).KindU.S6.Sons->data[0], (*B_105009).KindU.S6.Sons->data[0]);
if (!(LOC11)) goto LA12;
LOC11 = Levalue_56865((*B_105009).KindU.S6.Sons->data[0], (*A_105008).KindU.S6.Sons->data[1]);
LA12: ;
LOC7 = LOC11;
LA10: ;
Result_105179 = LOC7;
goto LA4;
LA5: ;
LOC13 = Levalue_56865((*A_105008).KindU.S6.Sons->data[0], B_105009);
if (!(LOC13)) goto LA14;
LOC13 = Levalue_56865(B_105009, (*A_105008).KindU.S6.Sons->data[1]);
LA14: ;
Result_105179 = LOC13;
LA4: ;
goto LA1;
LA2: ;
if (!((*B_105009).Kind == ((NU8) 35))) goto LA16;
LOC18 = Levalue_56865((*B_105009).KindU.S6.Sons->data[0], A_105008);
if (!(LOC18)) goto LA19;
LOC18 = Levalue_56865(A_105008, (*B_105009).KindU.S6.Sons->data[1]);
LA19: ;
Result_105179 = LOC18;
goto LA15;
LA16: ;
Result_105179 = Samevalue_56861(A_105008, B_105009);
LA15: ;
LA1: ;
return Result_105179;
}
N_NIMCALL(NIM_BOOL, Emptyrange_105019)(TY56526* A_105021, TY56526* B_105022) {
NIM_BOOL Result_105896;
NIM_BOOL LOC1;
Result_105896 = 0;
LOC1 = Levalue_56865(A_105021, B_105022);
Result_105896 = !(LOC1);
return Result_105896;
}
N_NOINLINE(void, nimsetsInit)(void) {
}

