/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY76204 TY76204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY56526 TY56526;
typedef struct TY92009 TY92009;
typedef struct TY48538 TY48538;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TNimObject TNimObject;
typedef struct TY56552 TY56552;
typedef struct TY56548 TY56548;
typedef struct TY55011 TY55011;
typedef struct TY56520 TY56520;
typedef struct TY55005 TY55005;
typedef struct TY56550 TY56550;
typedef struct TY56540 TY56540;
typedef struct TY53008 TY53008;
typedef struct TY56530 TY56530;
typedef struct TY56528 TY56528;
typedef struct TY56544 TY56544;
typedef struct TY44013 TY44013;
typedef NU8 TY22602[32];
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
struct TY92009 {
TY76204* Inp;
NU8 State;
TY48538 Info;
NI Indent;
NI Emitpar;
NimStringDesc* X;
TY76204* Outp;
NIM_CHAR Subschar;
NIM_CHAR Nimdirective;
NimStringDesc* Emit;
NimStringDesc* Conc;
NimStringDesc* Tostr;
NI Curly;
NI Bracket;
NI Par;
NIM_BOOL Pendingexprline;
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
struct TNimObject {
TNimType* m_type;
};
struct TY76204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
struct TY53008 {
  TNimObject Sup;
TY53008* Left;
TY53008* Right;
NI Length;
NimStringDesc* Data;
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
struct TY56550 {
  TGenericSeq Sup;
  TY56552* data[SEQ_DECL_SIZE];
};
struct TY56528 {
  TGenericSeq Sup;
  TY56548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, genericReset)(void* Dest_19728, TNimType* Mt_19729);
N_NIMCALL(TY48538, Newlineinfo_48718)(NimStringDesc* Filename_48720, NI Line_48721, NI Col_48722);
N_NIMCALL(TY76204*, Llstreamopen_76217)(NimStringDesc* Data_76219);
N_NIMCALL(NIM_CHAR, Chararg_91014)(TY56526* N_91016, NimStringDesc* Name_91017, NI Pos_91018, NIM_CHAR Default_91019);
N_NIMCALL(NimStringDesc*, Strarg_91020)(TY56526* N_91022, NimStringDesc* Name_91023, NI Pos_91024, NimStringDesc* Default_91025);
N_NIMCALL(NIM_BOOL, Llstreamatend_76263)(TY76204* S_76265);
N_NIMCALL(NimStringDesc*, Llstreamreadline_76240)(TY76204* S_76242);
N_NIMCALL(void, Parseline_92144)(TY92009* P_92147);
N_NIMCALL(void, Newline_92030)(TY92009* P_92033);
N_NIMCALL(void, Llstreamwrite_76246)(TY76204* S_76248, NimStringDesc* Data_76249);
N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NI Count_25671, NIM_CHAR C_25672);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(void, Scanpar_92038)(TY92009* P_92041, NI D_92042);
static N_INLINE(NIM_BOOL, Withinexpr_92128)(TY92009* P_92130);
N_NIMCALL(NIM_BOOL, Endswithopr_76443)(NimStringDesc* X_76445);
N_NIMCALL(NU8, Whichkeyword_73500)(NimStringDesc* Id_73502);
N_NIMCALL(void, Localerror_49193)(TY48538 Info_49195, NU8 Msg_49196, NimStringDesc* Arg_49197);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25409, NI Len_25410);
N_NIMCALL(void, Llstreamwrite_76250)(TY76204* S_76252, NIM_CHAR Data_76253);
N_NIMCALL(void, Llstreamclose_76232)(TY76204* S_76234);
NIM_CONST TY22602 Patternchars_92028 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xFF, 0x03,
0xFE, 0xFF, 0xFF, 0x87, 0xFE, 0xFF, 0xFF, 0x07,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}
;
STRING_LITERAL(TMP197840, "", 0);
STRING_LITERAL(TMP197841, "subschar", 8);
STRING_LITERAL(TMP197842, "metachar", 8);
STRING_LITERAL(TMP197843, "emit", 4);
STRING_LITERAL(TMP197844, "result.add", 10);
STRING_LITERAL(TMP197845, "conc", 4);
STRING_LITERAL(TMP197846, " & ", 3);
STRING_LITERAL(TMP197847, "tostring", 8);
STRING_LITERAL(TMP197848, "$", 1);
STRING_LITERAL(TMP197849, "\012", 1);
STRING_LITERAL(TMP197851, "end", 3);
STRING_LITERAL(TMP197852, "#end", 4);
STRING_LITERAL(TMP197853, "\"", 1);
STRING_LITERAL(TMP197854, "(\"", 2);
STRING_LITERAL(TMP197855, "\\x", 2);
STRING_LITERAL(TMP197856, "\\\\", 2);
STRING_LITERAL(TMP197857, "\\\'", 2);
STRING_LITERAL(TMP197858, "\\\"", 2);
STRING_LITERAL(TMP197859, "}", 1);
STRING_LITERAL(TMP197860, "\\n\"", 3);
extern TNimType* NTI92009; /* TTmplParser */
N_NIMCALL(void, Newline_92030)(TY92009* P_92033) {
NimStringDesc* LOC1;
NimStringDesc* LOC8;
LOC1 = 0;
LOC1 = nsuRepeatChar((*P_92033).Emitpar, 41);
Llstreamwrite_76246((*P_92033).Outp, LOC1);
(*P_92033).Emitpar = 0;
if (!(((NI16) 1) < (*P_92033).Info.Line)) goto LA3;
Llstreamwrite_76246((*P_92033).Outp, ((NimStringDesc*) &TMP197849));
LA3: ;
if (!(*P_92033).Pendingexprline) goto LA6;
LOC8 = 0;
LOC8 = nsuRepeatChar(2, 32);
Llstreamwrite_76246((*P_92033).Outp, LOC8);
(*P_92033).Pendingexprline = NIM_FALSE;
LA6: ;
}
N_NIMCALL(void, Scanpar_92038)(TY92009* P_92041, NI D_92042) {
NI I_92043;
I_92043 = 0;
I_92043 = D_92042;
while (1) {
switch (((NU8)((*P_92041).X->data[I_92043]))) {
case 0:
goto LA1;
break;
case 40:
(*P_92041).Par += 1;
break;
case 41:
(*P_92041).Par -= 1;
break;
case 91:
(*P_92041).Bracket += 1;
break;
case 93:
(*P_92041).Bracket -= 1;
break;
case 123:
(*P_92041).Curly += 1;
break;
case 125:
(*P_92041).Curly -= 1;
break;
default:
break;
}
I_92043 += 1;
} LA1: ;
}
static N_INLINE(NIM_BOOL, Withinexpr_92128)(TY92009* P_92130) {
NIM_BOOL Result_92131;
NIM_BOOL LOC1;
NIM_BOOL LOC2;
Result_92131 = 0;
LOC2 = (0 < (*P_92130).Par);
if (LOC2) goto LA3;
LOC2 = (0 < (*P_92130).Bracket);
LA3: ;
LOC1 = LOC2;
if (LOC1) goto LA4;
LOC1 = (0 < (*P_92130).Curly);
LA4: ;
Result_92131 = LOC1;
return Result_92131;
}
N_NIMCALL(void, Parseline_92144)(TY92009* P_92147) {
NI D_92148;
NI J_92149;
NI Curly_92150;
NimStringDesc* Keyw_92151;
NIM_BOOL LOC3;
NIM_BOOL LOC11;
NU8 LOC13;
NimStringDesc* LOC17;
NimStringDesc* LOC18;
NimStringDesc* LOC19;
NimStringDesc* LOC20;
NimStringDesc* LOC21;
NimStringDesc* LOC22;
NimStringDesc* LOC23;
NimStringDesc* LOC24;
NimStringDesc* LOC25;
NimStringDesc* LOC27;
Keyw_92151 = 0;
D_92148 = 0;
J_92149 = 0;
Curly_92150 = 0;
Keyw_92151 = NIM_NIL;
J_92149 = 0;
while (1) {
if (!((NU8)((*P_92147).X->data[J_92149]) == (NU8)(32))) goto LA1;
J_92149 += 1;
} LA1: ;
LOC3 = ((NU8)((*P_92147).X->data[0]) == (NU8)((*P_92147).Nimdirective));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)((*P_92147).X->data[1]) == (NU8)(33));
LA4: ;
if (!LOC3) goto LA5;
Newline_92030(P_92147);
goto LA2;
LA5: ;
if (!((NU8)((*P_92147).X->data[J_92149]) == (NU8)((*P_92147).Nimdirective))) goto LA7;
Newline_92030(P_92147);
J_92149 += 1;
while (1) {
if (!((NU8)((*P_92147).X->data[J_92149]) == (NU8)(32))) goto LA9;
J_92149 += 1;
} LA9: ;
D_92148 = J_92149;
Keyw_92151 = copyString(((NimStringDesc*) &TMP197840));
while (1) {
if (!(((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(97)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(122)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(65)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(90)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(48)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(57)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(128)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(255)) || ((NU8)((*P_92147).X->data[J_92149])) == ((NU8)(46)) || ((NU8)((*P_92147).X->data[J_92149])) == ((NU8)(95)))) goto LA10;
Keyw_92151 = addChar(Keyw_92151, (*P_92147).X->data[J_92149]);
J_92149 += 1;
} LA10: ;
Scanpar_92038(P_92147, J_92149);
LOC11 = Withinexpr_92128(&(*P_92147));
if (LOC11) goto LA12;
LOC11 = Endswithopr_76443((*P_92147).X);
LA12: ;
(*P_92147).Pendingexprline = LOC11;
LOC13 = Whichkeyword_73500(Keyw_92151);
switch (LOC13) {
case ((NU8) 19):
if (!(2 <= (*P_92147).Indent)) goto LA15;
(*P_92147).Indent -= 2;
goto LA14;
LA15: ;
(*P_92147).Info.Col = ((NI16) (J_92149));
Localerror_49193((*P_92147).Info, ((NU8) 159), ((NimStringDesc*) &TMP197851));
LA14: ;
LOC17 = 0;
LOC17 = nsuRepeatChar((*P_92147).Indent, 32);
Llstreamwrite_76246((*P_92147).Outp, LOC17);
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197852));
break;
case ((NU8) 26):
case ((NU8) 58):
case ((NU8) 54):
case ((NU8) 59):
case ((NU8) 23):
case ((NU8) 7):
case ((NU8) 9):
case ((NU8) 46):
case ((NU8) 33):
case ((NU8) 13):
case ((NU8) 36):
case ((NU8) 53):
case ((NU8) 37):
LOC18 = 0;
LOC18 = nsuRepeatChar((*P_92147).Indent, 32);
Llstreamwrite_76246((*P_92147).Outp, LOC18);
LOC19 = 0;
LOC19 = copyStr((*P_92147).X, D_92148);
Llstreamwrite_76246((*P_92147).Outp, LOC19);
(*P_92147).Indent += 2;
break;
case ((NU8) 17):
case ((NU8) 43):
case ((NU8) 18):
case ((NU8) 21):
case ((NU8) 22):
LOC20 = 0;
LOC20 = nsuRepeatChar((NI64)((*P_92147).Indent - 2), 32);
Llstreamwrite_76246((*P_92147).Outp, LOC20);
LOC21 = 0;
LOC21 = copyStr((*P_92147).X, D_92148);
Llstreamwrite_76246((*P_92147).Outp, LOC21);
break;
default:
LOC22 = 0;
LOC22 = nsuRepeatChar((*P_92147).Indent, 32);
Llstreamwrite_76246((*P_92147).Outp, LOC22);
LOC23 = 0;
LOC23 = copyStr((*P_92147).X, D_92148);
Llstreamwrite_76246((*P_92147).Outp, LOC23);
break;
}
(*P_92147).State = ((NU8) 0);
goto LA2;
LA7: ;
(*P_92147).Par = 0;
(*P_92147).Curly = 0;
(*P_92147).Bracket = 0;
J_92149 = 0;
switch ((*P_92147).State) {
case ((NU8) 1):
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Conc);
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197849));
LOC24 = 0;
LOC24 = nsuRepeatChar((NI64)((*P_92147).Indent + 2), 32);
Llstreamwrite_76246((*P_92147).Outp, LOC24);
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197853));
break;
case ((NU8) 0):
Newline_92030(P_92147);
LOC25 = 0;
LOC25 = nsuRepeatChar((*P_92147).Indent, 32);
Llstreamwrite_76246((*P_92147).Outp, LOC25);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Emit);
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197854));
(*P_92147).Emitpar += 1;
break;
}
(*P_92147).State = ((NU8) 1);
while (1) {
switch (((NU8)((*P_92147).X->data[J_92149]))) {
case 0:
goto LA26;
break;
case 1 ... 31:
case 128 ... 255:
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197855));
LOC27 = 0;
LOC27 = nsuToHex(((NI64) (((NU8)((*P_92147).X->data[J_92149])))), 2);
Llstreamwrite_76246((*P_92147).Outp, LOC27);
J_92149 += 1;
break;
case 92:
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197856));
J_92149 += 1;
break;
case 39:
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197857));
J_92149 += 1;
break;
case 34:
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197858));
J_92149 += 1;
break;
default:
if (!((NU8)((*P_92147).X->data[J_92149]) == (NU8)((*P_92147).Subschar))) goto LA29;
J_92149 += 1;
switch (((NU8)((*P_92147).X->data[J_92149]))) {
case 123:
(*P_92147).Info.Col = ((NI16) (J_92149));
Llstreamwrite_76250((*P_92147).Outp, 34);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Conc);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Tostr);
Llstreamwrite_76250((*P_92147).Outp, 40);
J_92149 += 1;
Curly_92150 = 0;
while (1) {
switch (((NU8)((*P_92147).X->data[J_92149]))) {
case 0:
Localerror_49193((*P_92147).Info, ((NU8) 183), ((NimStringDesc*) &TMP197859));
goto LA31;
break;
case 123:
J_92149 += 1;
Curly_92150 += 1;
Llstreamwrite_76250((*P_92147).Outp, 123);
break;
case 125:
J_92149 += 1;
if (!(Curly_92150 == 0)) goto LA33;
goto LA31;
LA33: ;
if (!(0 < Curly_92150)) goto LA36;
Curly_92150 -= 1;
LA36: ;
Llstreamwrite_76250((*P_92147).Outp, 125);
break;
default:
Llstreamwrite_76250((*P_92147).Outp, (*P_92147).X->data[J_92149]);
J_92149 += 1;
break;
}
} LA31: ;
Llstreamwrite_76250((*P_92147).Outp, 41);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Conc);
Llstreamwrite_76250((*P_92147).Outp, 34);
break;
case 97 ... 122:
case 65 ... 90:
case 128 ... 255:
Llstreamwrite_76250((*P_92147).Outp, 34);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Conc);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Tostr);
Llstreamwrite_76250((*P_92147).Outp, 40);
while (1) {
if (!(((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(97)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(122)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(65)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(90)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(48)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(57)) || ((NU8)((*P_92147).X->data[J_92149])) >= ((NU8)(128)) && ((NU8)((*P_92147).X->data[J_92149])) <= ((NU8)(255)) || ((NU8)((*P_92147).X->data[J_92149])) == ((NU8)(46)) || ((NU8)((*P_92147).X->data[J_92149])) == ((NU8)(95)))) goto LA38;
Llstreamwrite_76250((*P_92147).Outp, (*P_92147).X->data[J_92149]);
J_92149 += 1;
} LA38: ;
Llstreamwrite_76250((*P_92147).Outp, 41);
Llstreamwrite_76246((*P_92147).Outp, (*P_92147).Conc);
Llstreamwrite_76250((*P_92147).Outp, 34);
break;
default:
if (!((NU8)((*P_92147).X->data[J_92149]) == (NU8)((*P_92147).Subschar))) goto LA40;
Llstreamwrite_76250((*P_92147).Outp, (*P_92147).Subschar);
J_92149 += 1;
goto LA39;
LA40: ;
(*P_92147).Info.Col = ((NI16) (J_92149));
Localerror_49193((*P_92147).Info, ((NU8) 164), ((NimStringDesc*) &TMP197848));
LA39: ;
break;
}
goto LA28;
LA29: ;
Llstreamwrite_76250((*P_92147).Outp, (*P_92147).X->data[J_92149]);
J_92149 += 1;
LA28: ;
break;
}
} LA26: ;
Llstreamwrite_76246((*P_92147).Outp, ((NimStringDesc*) &TMP197860));
LA2: ;
}
N_NIMCALL(TY76204*, Filtertmpl_92001)(TY76204* Stdin_92003, NimStringDesc* Filename_92004, TY56526* Call_92005) {
TY76204* Result_92458;
TY92009 P_92459;
NIM_BOOL LOC2;
Result_92458 = 0;
memset((void*)&P_92459, 0, sizeof(P_92459));
Result_92458 = NIM_NIL;
genericReset((void*)&P_92459, NTI92009);
P_92459.Info = Newlineinfo_48718(Filename_92004, 0, 0);
P_92459.Outp = Llstreamopen_76217(((NimStringDesc*) &TMP197840));
P_92459.Inp = Stdin_92003;
P_92459.Subschar = Chararg_91014(Call_92005, ((NimStringDesc*) &TMP197841), 1, 36);
P_92459.Nimdirective = Chararg_91014(Call_92005, ((NimStringDesc*) &TMP197842), 2, 35);
P_92459.Emit = Strarg_91020(Call_92005, ((NimStringDesc*) &TMP197843), 3, ((NimStringDesc*) &TMP197844));
P_92459.Conc = Strarg_91020(Call_92005, ((NimStringDesc*) &TMP197845), 4, ((NimStringDesc*) &TMP197846));
P_92459.Tostr = Strarg_91020(Call_92005, ((NimStringDesc*) &TMP197847), 5, ((NimStringDesc*) &TMP197848));
while (1) {
LOC2 = Llstreamatend_76263(P_92459.Inp);
if (!!(LOC2)) goto LA1;
P_92459.X = Llstreamreadline_76240(P_92459.Inp);
P_92459.Info.Line = (NI16)(P_92459.Info.Line + ((NI16) 1));
Parseline_92144(&P_92459);
} LA1: ;
Newline_92030(&P_92459);
Result_92458 = P_92459.Outp;
Llstreamclose_76232(P_92459.Inp);
return Result_92458;
}
N_NOINLINE(void, ptmplsynInit)(void) {
}

