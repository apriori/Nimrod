/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY56548 TY56548;
typedef struct TY108012 TY108012;
typedef struct TY61084 TY61084;
typedef struct TY55011 TY55011;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY56530 TY56530;
typedef struct TY56528 TY56528;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY106002 TY106002;
typedef struct TNimObject TNimObject;
typedef struct TY108006 TY108006;
typedef struct TY56526 TY56526;
typedef struct TY61099 TY61099;
typedef struct TY61101 TY61101;
typedef struct TY56895 TY56895;
typedef struct TY56891 TY56891;
typedef struct TY56893 TY56893;
typedef struct TY44019 TY44019;
typedef struct TY44013 TY44013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY55005 TY55005;
typedef struct TY56552 TY56552;
typedef struct TY48538 TY48538;
typedef struct TY56540 TY56540;
typedef struct TY53008 TY53008;
typedef struct TY56544 TY56544;
typedef struct TY56520 TY56520;
typedef struct TY56550 TY56550;
struct TY61084 {
NI H;
TY55011* Name;
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
struct TY56530 {
TNimType* m_type;
NI Counter;
TY56528* Data;
};
struct TNimObject {
TNimType* m_type;
};
struct TY106002 {
  TNimObject Sup;
};
struct TY61099 {
NI Tos;
TY61101* Stack;
};
struct TY56895 {
NI Counter;
NI Max;
TY56891* Head;
TY56893* Data;
};
struct TY44019 {
TNimType* m_type;
TY44013* Head;
TY44013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY56526*, TY108032) (TY108012* C_108033, TY56526* N_108034);
typedef N_NIMCALL_PTR(TY56526*, TY108037) (TY108012* C_108038, TY56526* N_108039);
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY108012 {
  TY106002 Sup;
TY56548* Module;
TY108006* P;
NI Instcounter;
TY56526* Generics;
NI Lastgenericidx;
TY61099 Tab;
TY56895 Ambiguoussymbols;
TY56528* Converters;
TY44019 Optionstack;
TY44019 Libs;
NIM_BOOL Fromcache;
TY108032 Semconstexpr;
TY108037 Semexpr;
TY56895 Includedfiles;
NimStringDesc* Filename;
TY56530 Userpragmas;
};
struct TY55005 {
  TNimObject Sup;
NI Id;
};
struct TY48538 {
NI16 Line;
NI16 Col;
int Fileindex;
};
struct TY56540 {
NU8 K;
NU8 S;
NU8 Flags;
TY56552* T;
TY53008* R;
NI A;
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
struct TY55011 {
  TY55005 Sup;
NimStringDesc* S;
TY55011* Next;
NI H;
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
struct TY108006 {
TY56548* Owner;
TY56548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8814[16];
struct TY56891 {
TY56891* Next;
NI Key;
TY8814 Bits;
};
struct TY44013 {
  TNimObject Sup;
TY44013* Prev;
TY44013* Next;
};
struct TY53008 {
  TNimObject Sup;
TY53008* Left;
TY53008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY56544 {
  TY44013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY53008* Name;
TY56526* Path;
};
struct TY56528 {
  TGenericSeq Sup;
  TY56548* data[SEQ_DECL_SIZE];
};
struct TY61101 {
  TGenericSeq Sup;
  TY56530 data[SEQ_DECL_SIZE];
};
struct TY56893 {
  TGenericSeq Sup;
  TY56891* data[SEQ_DECL_SIZE];
};
struct TY56520 {
  TGenericSeq Sup;
  TY56526* data[SEQ_DECL_SIZE];
};
struct TY56550 {
  TGenericSeq Sup;
  TY56552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* Dest_19728, TNimType* Mt_19729);
N_NIMCALL(TY56548*, Initidentiter_61087)(TY61084* Ti_61090, TY56530* Tab_61091, TY55011* S_61092);
N_NIMCALL(NIM_BOOL, Equalgenericparams_122014)(TY56526* Proca_122016, TY56526* Procb_122017);
static N_INLINE(NI, Sonslen_56804)(TY56526* N_56806);
N_NIMCALL(void, Internalerror_49208)(TY48538 Info_49210, NimStringDesc* Errmsg_49211);
N_NIMCALL(NIM_BOOL, Sametypeornil_98052)(TY56552* A_98054, TY56552* B_98055);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_97035)(TY56526* A_97037, TY56526* B_97038);
N_NIMCALL(NU8, Equalparams_98065)(TY56526* A_98067, TY56526* B_98068);
N_NIMCALL(void, Localerror_49193)(TY48538 Info_49195, NU8 Msg_49196, NimStringDesc* Arg_49197);
N_NIMCALL(TY56548*, Nextidentiter_61093)(TY61084* Ti_61096, TY56530* Tab_61097);
N_NIMCALL(NIM_BOOL, Paramsfitborrow_122248)(TY56526* A_122250, TY56526* B_122251);
N_NIMCALL(NIM_BOOL, Equalordistinctof_98056)(TY56552* X_98058, TY56552* Y_98059);
STRING_LITERAL(TMP198221, "equalGenericParams", 18);
extern TNimType* NTI61084; /* TIdentIter */
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
N_NIMCALL(NIM_BOOL, Equalgenericparams_122014)(TY56526* Proca_122016, TY56526* Procb_122017) {
NIM_BOOL Result_122018;
TY56548* A_122019;
TY56548* B_122020;
NIM_BOOL LOC5;
NI LOC10;
NI LOC11;
NI I_122077;
NI HEX3Atmp_122192;
NI LOC14;
NI Res_122194;
NIM_BOOL LOC23;
NIM_BOOL LOC25;
NIM_BOOL LOC29;
NIM_BOOL LOC34;
A_122019 = 0;
B_122020 = 0;
Result_122018 = 0;
A_122019 = NIM_NIL;
B_122020 = NIM_NIL;
Result_122018 = (Proca_122016 == Procb_122017);
if (!Result_122018) goto LA2;
goto BeforeRet;
LA2: ;
LOC5 = (Proca_122016 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (Procb_122017 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
goto BeforeRet;
LA7: ;
LOC10 = Sonslen_56804(Proca_122016);
LOC11 = Sonslen_56804(Procb_122017);
if (!!((LOC10 == LOC11))) goto LA12;
goto BeforeRet;
LA12: ;
I_122077 = 0;
HEX3Atmp_122192 = 0;
LOC14 = Sonslen_56804(Proca_122016);
HEX3Atmp_122192 = (NI32)(LOC14 - 1);
Res_122194 = 0;
Res_122194 = 0;
while (1) {
if (!(Res_122194 <= HEX3Atmp_122192)) goto LA15;
I_122077 = Res_122194;
if (!!(((*(*Proca_122016).KindU.S6.Sons->data[I_122077]).Kind == ((NU8) 3)))) goto LA17;
Internalerror_49208((*Proca_122016).Info, ((NimStringDesc*) &TMP198221));
LA17: ;
if (!!(((*(*Procb_122017).KindU.S6.Sons->data[I_122077]).Kind == ((NU8) 3)))) goto LA20;
Internalerror_49208((*Procb_122017).Info, ((NimStringDesc*) &TMP198221));
LA20: ;
A_122019 = (*(*Proca_122016).KindU.S6.Sons->data[I_122077]).KindU.S4.Sym;
B_122020 = (*(*Procb_122017).KindU.S6.Sons->data[I_122077]).KindU.S4.Sym;
LOC23 = !(((*(*A_122019).Name).Sup.Id == (*(*B_122020).Name).Sup.Id));
if (LOC23) goto LA24;
LOC25 = Sametypeornil_98052((*A_122019).Typ, (*B_122020).Typ);
LOC23 = !(LOC25);
LA24: ;
if (!LOC23) goto LA26;
goto BeforeRet;
LA26: ;
LOC29 = !(((*A_122019).Ast == NIM_NIL));
if (!(LOC29)) goto LA30;
LOC29 = !(((*B_122020).Ast == NIM_NIL));
LA30: ;
if (!LOC29) goto LA31;
LOC34 = Exprstructuralequivalent_97035((*A_122019).Ast, (*B_122020).Ast);
if (!!(LOC34)) goto LA35;
goto BeforeRet;
LA35: ;
LA31: ;
Res_122194 += 1;
} LA15: ;
Result_122018 = NIM_TRUE;
BeforeRet: ;
return Result_122018;
}
N_NIMCALL(TY56548*, Searchforproc_122004)(TY108012* C_122006, TY56548* Fn_122007, NI Tos_122008) {
TY56548* Result_122200;
TY61084 It_122201;
NIM_BOOL LOC6;
NU8 LOC9;
Result_122200 = 0;
memset((void*)&It_122201, 0, sizeof(It_122201));
Result_122200 = NIM_NIL;
genericReset((void*)&It_122201, NTI61084);
Result_122200 = Initidentiter_61087(&It_122201, &(*C_122006).Tab.Stack->data[Tos_122008], (*Fn_122007).Name);
while (1) {
if (!!((Result_122200 == NIM_NIL))) goto LA1;
if (!((*Result_122200).Kind == (*Fn_122007).Kind)) goto LA3;
LOC6 = Equalgenericparams_122014((*(*Result_122200).Ast).KindU.S6.Sons->data[1], (*(*Fn_122007).Ast).KindU.S6.Sons->data[1]);
if (!LOC6) goto LA7;
LOC9 = Equalparams_98065((*(*Result_122200).Typ).N, (*(*Fn_122007).Typ).N);
switch (LOC9) {
case ((NU8) 1):
goto BeforeRet;
break;
case ((NU8) 2):
Localerror_49193((*Fn_122007).Info, ((NU8) 63), (*(*Fn_122007).Name).S);
goto BeforeRet;
break;
case ((NU8) 0):
break;
}
LA7: ;
LA3: ;
Result_122200 = Nextidentiter_61093(&It_122201, &(*C_122006).Tab.Stack->data[Tos_122008]);
} LA1: ;
BeforeRet: ;
return Result_122200;
}
N_NIMCALL(NIM_BOOL, Paramsfitborrow_122248)(TY56526* A_122250, TY56526* B_122251) {
NIM_BOOL Result_122252;
NI Length_122253;
NI LOC2;
NI I_122264;
NI HEX3Atmp_122357;
NI Res_122359;
TY56548* M_122289;
TY56548* N_122314;
NIM_BOOL LOC7;
NIM_BOOL LOC11;
M_122289 = 0;
N_122314 = 0;
Result_122252 = 0;
Length_122253 = 0;
Length_122253 = Sonslen_56804(A_122250);
Result_122252 = NIM_FALSE;
LOC2 = Sonslen_56804(B_122251);
if (!(Length_122253 == LOC2)) goto LA3;
I_122264 = 0;
HEX3Atmp_122357 = 0;
HEX3Atmp_122357 = (NI32)(Length_122253 - 1);
Res_122359 = 0;
Res_122359 = 1;
while (1) {
if (!(Res_122359 <= HEX3Atmp_122357)) goto LA5;
I_122264 = Res_122359;
M_122289 = NIM_NIL;
M_122289 = (*(*A_122250).KindU.S6.Sons->data[I_122264]).KindU.S4.Sym;
N_122314 = NIM_NIL;
N_122314 = (*(*B_122251).KindU.S6.Sons->data[I_122264]).KindU.S4.Sym;
LOC7 = Equalordistinctof_98056((*M_122289).Typ, (*N_122314).Typ);
if (!!(LOC7)) goto LA8;
goto BeforeRet;
LA8: ;
Res_122359 += 1;
} LA5: ;
LOC11 = Equalordistinctof_98056((*(*A_122250).KindU.S6.Sons->data[0]).Typ, (*(*B_122251).KindU.S6.Sons->data[0]).Typ);
if (!!(LOC11)) goto LA12;
goto BeforeRet;
LA12: ;
Result_122252 = NIM_TRUE;
LA3: ;
BeforeRet: ;
return Result_122252;
}
N_NIMCALL(TY56548*, Searchforborrowproc_122009)(TY108012* C_122011, TY56548* Fn_122012, NI Tos_122013) {
TY56548* Result_122365;
TY61084 It_122366;
NI Scope_122389;
NI Res_122439;
NIM_BOOL LOC4;
NIM_BOOL LOC9;
NIM_BOOL LOC13;
Result_122365 = 0;
memset((void*)&It_122366, 0, sizeof(It_122366));
Result_122365 = NIM_NIL;
genericReset((void*)&It_122366, NTI61084);
Scope_122389 = 0;
Res_122439 = 0;
Res_122439 = Tos_122013;
while (1) {
if (!(0 <= Res_122439)) goto LA1;
Scope_122389 = Res_122439;
Result_122365 = Initidentiter_61087(&It_122366, &(*C_122011).Tab.Stack->data[Scope_122389], (*Fn_122012).Name);
while (1) {
if (!!((Result_122365 == NIM_NIL))) goto LA2;
LOC4 = ((*Result_122365).Kind == (*Fn_122012).Kind);
if (!(LOC4)) goto LA5;
LOC4 = !(((*Result_122365).Sup.Id == (*Fn_122012).Sup.Id));
LA5: ;
if (!LOC4) goto LA6;
LOC9 = Equalgenericparams_122014((*(*Result_122365).Ast).KindU.S6.Sons->data[1], (*(*Fn_122012).Ast).KindU.S6.Sons->data[1]);
if (!LOC9) goto LA10;
LOC13 = Paramsfitborrow_122248((*(*Fn_122012).Typ).N, (*(*Result_122365).Typ).N);
if (!LOC13) goto LA14;
goto BeforeRet;
LA14: ;
LA10: ;
LA6: ;
Result_122365 = Nextidentiter_61093(&It_122366, &(*C_122011).Tab.Stack->data[Scope_122389]);
} LA2: ;
Res_122439 -= 1;
} LA1: ;
BeforeRet: ;
return Result_122365;
}
N_NOINLINE(void, procfindInit)(void) {
}

