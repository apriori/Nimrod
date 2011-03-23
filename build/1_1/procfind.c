/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY51548 TY51548;
typedef struct TY104012 TY104012;
typedef struct TY56084 TY56084;
typedef struct TY50011 TY50011;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY102002 TY102002;
typedef struct TNimObject TNimObject;
typedef struct TY104006 TY104006;
typedef struct TY51526 TY51526;
typedef struct TY56099 TY56099;
typedef struct TY56101 TY56101;
typedef struct TY51895 TY51895;
typedef struct TY51891 TY51891;
typedef struct TY51893 TY51893;
typedef struct TY39019 TY39019;
typedef struct TY39013 TY39013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY50005 TY50005;
typedef struct TY51552 TY51552;
typedef struct TY43538 TY43538;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY51520 TY51520;
typedef struct TY51550 TY51550;
struct TY56084 {
NI H;
TY50011* Name;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
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
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY56099 {
NI Tos;
TY56101* Stack;
};
struct TY51895 {
NI Counter;
NI Max;
TY51891* Head;
TY51893* Data;
};
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY51526*, TY104032) (TY104012* C_104033, TY51526* N_104034);
typedef N_NIMCALL_PTR(TY51526*, TY104037) (TY104012* C_104038, TY51526* N_104039);
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY104012 {
  TY102002 Sup;
TY51548* Module;
TY104006* P;
NI Instcounter;
TY51526* Generics;
NI Lastgenericidx;
TY56099 Tab;
TY51895 Ambiguoussymbols;
TY51528* Converters;
TY39019 Optionstack;
TY39019 Libs;
NIM_BOOL Fromcache;
TY104032 Semconstexpr;
TY104037 Semexpr;
TY51895 Includedfiles;
NimStringDesc* Filename;
TY51530 Userpragmas;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY43538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
};
struct TY51548 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51552* Typ;
TY50011* Name;
TY43538 Info;
TY51548* Owner;
NU32 Flags;
TY51530 Tab;
TY51526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51540 Loc;
TY51544* Annex;
};
struct TY51526 {
TY51552* Typ;
NimStringDesc* Comment;
TY43538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51548* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51520* Sons;
} S6;
} KindU;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY51552 {
  TY50005 Sup;
NU8 Kind;
TY51550* Sons;
TY51526* N;
NU8 Flags;
NU8 Callconv;
TY51548* Owner;
TY51548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51540 Loc;
};
struct TY104006 {
TY51548* Owner;
TY51548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8614[16];
struct TY51891 {
TY51891* Next;
NI Key;
TY8614 Bits;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY56101 {
  TGenericSeq Sup;
  TY51530 data[SEQ_DECL_SIZE];
};
struct TY51893 {
  TGenericSeq Sup;
  TY51891* data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* Dest_19528, TNimType* Mt_19529);
N_NIMCALL(TY51548*, Initidentiter_56087)(TY56084* Ti_56090, TY51530* Tab_56091, TY50011* S_56092);
N_NIMCALL(NIM_BOOL, Equalgenericparams_118014)(TY51526* Proca_118016, TY51526* Procb_118017);
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806);
N_NIMCALL(void, Internalerror_44208)(TY43538 Info_44210, NimStringDesc* Errmsg_44211);
N_NIMCALL(NIM_BOOL, Sametypeornil_94052)(TY51552* A_94054, TY51552* B_94055);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_93035)(TY51526* A_93037, TY51526* B_93038);
N_NIMCALL(NU8, Equalparams_94065)(TY51526* A_94067, TY51526* B_94068);
N_NIMCALL(void, Localerror_44193)(TY43538 Info_44195, NU8 Msg_44196, NimStringDesc* Arg_44197);
N_NIMCALL(TY51548*, Nextidentiter_56093)(TY56084* Ti_56096, TY51530* Tab_56097);
N_NIMCALL(NIM_BOOL, Paramsfitborrow_118248)(TY51526* A_118250, TY51526* B_118251);
N_NIMCALL(NIM_BOOL, Equalordistinctof_94056)(TY51552* X_94058, TY51552* Y_94059);
STRING_LITERAL(TMP194226, "equalGenericParams", 18);
extern TNimType* NTI56084; /* TIdentIter */
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806) {
NI Result_52897;
Result_52897 = 0;
if (!(*N_51806).KindU.S6.Sons == 0) goto LA2;
Result_52897 = 0;
goto LA1;
LA2: ;
Result_52897 = (*N_51806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_52897;
}
N_NIMCALL(NIM_BOOL, Equalgenericparams_118014)(TY51526* Proca_118016, TY51526* Procb_118017) {
NIM_BOOL Result_118018;
TY51548* A_118019;
TY51548* B_118020;
NIM_BOOL LOC5;
NI LOC10;
NI LOC11;
NI I_118077;
NI HEX3Atmp_118192;
NI LOC14;
NI Res_118194;
NIM_BOOL LOC23;
NIM_BOOL LOC25;
NIM_BOOL LOC29;
NIM_BOOL LOC34;
A_118019 = 0;
B_118020 = 0;
Result_118018 = 0;
A_118019 = NIM_NIL;
B_118020 = NIM_NIL;
Result_118018 = (Proca_118016 == Procb_118017);
if (!Result_118018) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = (Proca_118016 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (Procb_118017 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sonslen_51804(Proca_118016);
LOC11 = Sonslen_51804(Procb_118017);
if (!!((LOC10 == LOC11))) goto LA12;
goto BeforeRet;
LA12: ;
I_118077 = 0;
HEX3Atmp_118192 = 0;
LOC14 = Sonslen_51804(Proca_118016);
HEX3Atmp_118192 = (NI32)(LOC14 - 1);
Res_118194 = 0;
Res_118194 = 0;
while (1) {
if (!(Res_118194 <= HEX3Atmp_118192)) goto LA15;
I_118077 = Res_118194;
if (!!(((*(*Proca_118016).KindU.S6.Sons->data[I_118077]).Kind == ((NU8) 3)))) goto LA17;
Internalerror_44208((*Proca_118016).Info, ((NimStringDesc*) &TMP194226));
LA17: ;
if (!!(((*(*Procb_118017).KindU.S6.Sons->data[I_118077]).Kind == ((NU8) 3)))) goto LA20;
Internalerror_44208((*Procb_118017).Info, ((NimStringDesc*) &TMP194226));
LA20: ;
A_118019 = (*(*Proca_118016).KindU.S6.Sons->data[I_118077]).KindU.S4.Sym;
B_118020 = (*(*Procb_118017).KindU.S6.Sons->data[I_118077]).KindU.S4.Sym;
LOC23 = !(((*(*A_118019).Name).Sup.Id == (*(*B_118020).Name).Sup.Id));
if (LOC23) goto LA24;
LOC25 = Sametypeornil_94052((*A_118019).Typ, (*B_118020).Typ);
LOC23 = !(LOC25);
LA24: ;
if (!LOC23) goto LA26;
goto BeforeRet;
LA26: ;
LOC29 = !(((*A_118019).Ast == NIM_NIL));
if (!(LOC29)) goto LA30;
LOC29 = !(((*B_118020).Ast == NIM_NIL));
LA30: ;
if (!LOC29) goto LA31;
LOC34 = Exprstructuralequivalent_93035((*A_118019).Ast, (*B_118020).Ast);
if (!!(LOC34)) goto LA35;
goto BeforeRet;
LA35: ;
LA31: ;
Res_118194 += 1;
} LA15: ;
Result_118018 = NIM_TRUE;
BeforeRet: ;
return Result_118018;
}
N_NIMCALL(TY51548*, Searchforproc_118004)(TY104012* C_118006, TY51548* Fn_118007, NI Tos_118008) {
TY51548* Result_118200;
TY56084 It_118201;
NIM_BOOL LOC6;
NU8 LOC9;
Result_118200 = 0;
memset((void*)&It_118201, 0, sizeof(It_118201));
Result_118200 = NIM_NIL;
genericReset((void*)&It_118201, NTI56084);
Result_118200 = Initidentiter_56087(&It_118201, &(*C_118006).Tab.Stack->data[Tos_118008], (*Fn_118007).Name);
while (1) {
if (!!((Result_118200 == NIM_NIL))) goto LA1;
if (!((*Result_118200).Kind == (*Fn_118007).Kind)) goto LA3;
LOC6 = Equalgenericparams_118014((*(*Result_118200).Ast).KindU.S6.Sons->data[1], (*(*Fn_118007).Ast).KindU.S6.Sons->data[1]);
if (!LOC6) goto LA7;
LOC9 = Equalparams_94065((*(*Result_118200).Typ).N, (*(*Fn_118007).Typ).N);
switch (LOC9) {
case ((NU8) 1):
goto BeforeRet;
break;
case ((NU8) 2):
Localerror_44193((*Fn_118007).Info, ((NU8) 63), (*(*Fn_118007).Name).S);
goto BeforeRet;
break;
case ((NU8) 0):
break;
}
LA7: ;
LA3: ;
Result_118200 = Nextidentiter_56093(&It_118201, &(*C_118006).Tab.Stack->data[Tos_118008]);
} LA1: ;
BeforeRet: ;
return Result_118200;
}
N_NIMCALL(NIM_BOOL, Paramsfitborrow_118248)(TY51526* A_118250, TY51526* B_118251) {
NIM_BOOL Result_118252;
NI Length_118253;
NI LOC2;
NI I_118264;
NI HEX3Atmp_118357;
NI Res_118359;
TY51548* M_118289;
TY51548* N_118314;
NIM_BOOL LOC7;
NIM_BOOL LOC11;
M_118289 = 0;
N_118314 = 0;
Result_118252 = 0;
Length_118253 = 0;
Length_118253 = Sonslen_51804(A_118250);
Result_118252 = NIM_FALSE;
LOC2 = Sonslen_51804(B_118251);
if (!(Length_118253 == LOC2)) goto LA3;
I_118264 = 0;
HEX3Atmp_118357 = 0;
HEX3Atmp_118357 = (NI32)(Length_118253 - 1);
Res_118359 = 0;
Res_118359 = 1;
while (1) {
if (!(Res_118359 <= HEX3Atmp_118357)) goto LA5;
I_118264 = Res_118359;
M_118289 = NIM_NIL;
M_118289 = (*(*A_118250).KindU.S6.Sons->data[I_118264]).KindU.S4.Sym;
N_118314 = NIM_NIL;
N_118314 = (*(*B_118251).KindU.S6.Sons->data[I_118264]).KindU.S4.Sym;
LOC7 = Equalordistinctof_94056((*M_118289).Typ, (*N_118314).Typ);
if (!!(LOC7)) goto LA8;
goto BeforeRet;
LA8: ;
Res_118359 += 1;
} LA5: ;
LOC11 = Equalordistinctof_94056((*(*A_118250).KindU.S6.Sons->data[0]).Typ, (*(*B_118251).KindU.S6.Sons->data[0]).Typ);
if (!!(LOC11)) goto LA12;
goto BeforeRet;
LA12: ;
Result_118252 = NIM_TRUE;
LA3: ;
BeforeRet: ;
return Result_118252;
}
N_NIMCALL(TY51548*, Searchforborrowproc_118009)(TY104012* C_118011, TY51548* Fn_118012, NI Tos_118013) {
TY51548* Result_118365;
TY56084 It_118366;
NI Scope_118389;
NI Res_118439;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
Result_118365 = 0;
memset((void*)&It_118366, 0, sizeof(It_118366));
Result_118365 = NIM_NIL;
genericReset((void*)&It_118366, NTI56084);
Scope_118389 = 0;
Res_118439 = 0;
Res_118439 = Tos_118013;
while (1) {
if (!(0 <= Res_118439)) goto LA1;
Scope_118389 = Res_118439;
Result_118365 = Initidentiter_56087(&It_118366, &(*C_118011).Tab.Stack->data[Scope_118389], (*Fn_118012).Name);
while (1) {
if (!!((Result_118365 == NIM_NIL))) goto LA2;
LOC4 = ((*Result_118365).Kind == (*Fn_118012).Kind);
if (!(LOC4)) goto LA5;
LOC4 = !(((*Result_118365).Sup.Id == (*Fn_118012).Sup.Id));
LA5: ;
if (!LOC4) goto LA6;
LOC9 = Equalgenericparams_118014((*(*Result_118365).Ast).KindU.S6.Sons->data[1], (*(*Fn_118012).Ast).KindU.S6.Sons->data[1]);
if (!LOC9) goto LA10;
LOC13 = Paramsfitborrow_118248((*(*Fn_118012).Typ).N, (*(*Result_118365).Typ).N);
if (!LOC13) goto LA14;
goto BeforeRet;
LA14: ;
LA10: ;
LA6: ;
Result_118365 = Nextidentiter_56093(&It_118366, &(*C_118011).Tab.Stack->data[Scope_118389]);
} LA2: ;
Res_118439 -= 1;
} LA1: ;
BeforeRet: ;
return Result_118365;
}
N_NOINLINE(void, procfindInit)(void) {
}

