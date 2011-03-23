/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY56526 TY56526;
typedef struct TY93028 TY93028;
typedef struct TY82011 TY82011;
typedef struct TY78267 TY78267;
typedef struct TY78263 TY78263;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY76204 TY76204;
typedef struct TY56552 TY56552;
typedef struct TY48538 TY48538;
typedef struct TY56548 TY56548;
typedef struct TY55011 TY55011;
typedef struct TY56520 TY56520;
typedef struct TY55005 TY55005;
typedef struct TNimObject TNimObject;
typedef struct TY77015 TY77015;
typedef struct TY78281 TY78281;
typedef struct TY56550 TY56550;
typedef struct TY56540 TY56540;
typedef struct TY53008 TY53008;
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
typedef NimStringDesc* TY93013[3];
typedef NimStringDesc* TY93017[4];
struct TY82011 {
TY78267* Lex;
TY78263* Tok;
};
struct TY93028 {
NU8 Skin;
TY82011 Parser;
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
struct TNimObject {
TNimType* m_type;
};
struct TY55005 {
  TNimObject Sup;
NI Id;
};
struct TY55011 {
  TY55005 Sup;
NimStringDesc* S;
TY55011* Next;
NI H;
};
typedef NimStringDesc* TY47337[1];
struct TY76204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TY77015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY76204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY78267 {
  TY77015 Sup;
NimStringDesc* Filename;
TY78281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY78263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY55011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY78263* Next;
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
struct TY78281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
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
N_NIMCALL(NIM_BOOL, Open_3817)(FILE** F_3820, NimStringDesc* Filename_3821, NU8 Mode_3822, NI Bufsize_3823);
N_NIMCALL(void, Rawmessage_49094)(NU8 Msg_49096, NimStringDesc* Arg_49097);
N_NIMCALL(void, Openparsers_93034)(TY93028* P_93037, NimStringDesc* Filename_93038, TY76204* Inputstream_93039);
N_NIMCALL(TY56526*, Parsepipe_93122)(NimStringDesc* Filename_93124, TY76204* Inputstream_93125);
N_NIMCALL(TY76204*, Llstreamopen_76224)(NimStringDesc* Filename_76226, NU8 Mode_76227);
N_NIMCALL(NimStringDesc*, Llstreamreadline_76240)(TY76204* S_76242);
N_NIMCALL(NI, Utf8bom_93077)(NimStringDesc* S_93079);
N_NIMCALL(NIM_BOOL, Containsshebang_93087)(NimStringDesc* S_93089, NI I_93090);
N_NIMCALL(void, Openparser_82018)(TY82011* P_82021, NimStringDesc* Filename_82022, TY76204* Inputstream_82023);
N_NIMCALL(TY76204*, Llstreamopen_76217)(NimStringDesc* Data_76219);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* S_2324, NI First_2325);
N_NIMCALL(TY56526*, Parseall_82014)(TY82011* P_82017);
N_NIMCALL(void, Closeparser_82024)(TY82011* P_82027);
N_NIMCALL(void, Llstreamclose_76232)(TY76204* S_76234);
N_NIMCALL(TY76204*, Evalpipe_93374)(TY93028* P_93377, TY56526* N_93378, NimStringDesc* Filename_93379, TY76204* Start_93380);
N_NIMCALL(NIM_BOOL, Identeq_55028)(TY55011* Id_55030, NimStringDesc* Name_55031);
N_NIMCALL(TY76204*, Applyfilter_93337)(TY93028* P_93340, TY56526* N_93341, NimStringDesc* Filename_93342, TY76204* Stdin_93343);
N_NIMCALL(TY55011*, Getcallee_93258)(TY56526* N_93260);
N_NIMCALL(NimStringDesc*, Rendertree_86042)(TY56526* N_86044, NU8 Renderflags_86047);
N_NIMCALL(NU8, Getfilter_93184)(TY55011* Ident_93186);
N_NIMCALL(NU8, Getparser_93221)(TY55011* Ident_93223);
N_NIMCALL(TY76204*, Filtertmpl_92001)(TY76204* Stdin_92003, NimStringDesc* Filename_92004, TY56526* Call_92005);
N_NIMCALL(TY76204*, Filterstrip_91009)(TY76204* Stdin_91011, NimStringDesc* Filename_91012, TY56526* Call_91013);
N_NIMCALL(TY76204*, Filterreplace_91004)(TY76204* Stdin_91006, NimStringDesc* Filename_91007, TY56526* Call_91008);
N_NIMCALL(void, Rawmessage_49020)(NU8 Msg_49022, NimStringDesc** Args_49024, NI Args_49024Len0);
N_NIMCALL(void, Msgwriteln_48794)(NimStringDesc* S_48796);
N_NIMCALL(TY76204*, Llstreamopen_76220)(FILE** F_76223);
N_NIMCALL(TY56526*, Parseall_93044)(TY93028* P_93047);
N_NIMCALL(TY56526*, Parseall_84004)(TY82011* P_84007);
N_NIMCALL(void, Internalerror_49212)(NimStringDesc* Errmsg_49214);
N_NIMCALL(void, Closeparsers_93040)(TY93028* P_93043);
N_NIMCALL(TY56526*, Parsetoplevelstmt_82028)(TY82011* P_82031);
N_NIMCALL(TY56526*, Parsetoplevelstmt_84008)(TY82011* P_84011);
STRING_LITERAL(TMP93020, "standard", 8);
STRING_LITERAL(TMP93021, "braces", 6);
STRING_LITERAL(TMP93022, "endx", 4);
NIM_CONST TY93013 Parsernames_93012 = {((NimStringDesc*) &TMP93020),
((NimStringDesc*) &TMP93021),
((NimStringDesc*) &TMP93022)}
;
STRING_LITERAL(TMP93023, "none", 4);
STRING_LITERAL(TMP93024, "stdtmpl", 7);
STRING_LITERAL(TMP93025, "replace", 7);
STRING_LITERAL(TMP93026, "strip", 5);
NIM_CONST TY93017 Filternames_93016 = {((NimStringDesc*) &TMP93023),
((NimStringDesc*) &TMP93024),
((NimStringDesc*) &TMP93025),
((NimStringDesc*) &TMP93026)}
;
STRING_LITERAL(TMP197743, "|", 1);
STRING_LITERAL(TMP197874, "parser to implement", 19);
extern TNimType* NTI93028; /* TParsers */
extern TY56526* Emptynode_56858;
extern TNimType* NTI82011; /* TParser */
extern NI Gverbosity_47090;
N_NIMCALL(NI, Utf8bom_93077)(NimStringDesc* S_93079) {
NI Result_93080;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
Result_93080 = 0;
LOC3 = ((NU8)(S_93079->data[0]) == (NU8)(239));
if (!(LOC3)) goto LA4;
LOC3 = ((NU8)(S_93079->data[1]) == (NU8)(187));
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA5;
LOC2 = ((NU8)(S_93079->data[2]) == (NU8)(191));
LA5: ;
if (!LOC2) goto LA6;
Result_93080 = 3;
goto LA1;
LA6: ;
Result_93080 = 0;
LA1: ;
return Result_93080;
}
N_NIMCALL(NIM_BOOL, Containsshebang_93087)(NimStringDesc* S_93089, NI I_93090) {
NIM_BOOL Result_93091;
NIM_BOOL LOC2;
NI J_93096;
Result_93091 = 0;
LOC2 = ((NU8)(S_93089->data[I_93090]) == (NU8)(35));
if (!(LOC2)) goto LA3;
LOC2 = ((NU8)(S_93089->data[(NI64)(I_93090 + 1)]) == (NU8)(33));
LA3: ;
if (!LOC2) goto LA4;
J_93096 = 0;
J_93096 = (NI64)(I_93090 + 2);
while (1) {
if (!(((NU8)(S_93089->data[J_93096])) == ((NU8)(32)) || ((NU8)(S_93089->data[J_93096])) == ((NU8)(9)) || ((NU8)(S_93089->data[J_93096])) == ((NU8)(11)) || ((NU8)(S_93089->data[J_93096])) == ((NU8)(13)) || ((NU8)(S_93089->data[J_93096])) == ((NU8)(10)) || ((NU8)(S_93089->data[J_93096])) == ((NU8)(12)))) goto LA6;
J_93096 += 1;
} LA6: ;
Result_93091 = ((NU8)(S_93089->data[J_93096]) == (NU8)(47));
LA4: ;
return Result_93091;
}
N_NIMCALL(TY56526*, Parsepipe_93122)(NimStringDesc* Filename_93124, TY76204* Inputstream_93125) {
TY56526* Result_93126;
TY76204* S_93127;
NimStringDesc* Line_93139;
NI I_93140;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
TY82011 Q_93180;
NimStringDesc* LOC14;
TY76204* LOC15;
Result_93126 = 0;
S_93127 = 0;
Line_93139 = 0;
memset((void*)&Q_93180, 0, sizeof(Q_93180));
Result_93126 = NIM_NIL;
Result_93126 = Emptynode_56858;
S_93127 = NIM_NIL;
S_93127 = Llstreamopen_76224(Filename_93124, ((NU8) 0));
if (!!((S_93127 == NIM_NIL))) goto LA2;
Line_93139 = NIM_NIL;
Line_93139 = Llstreamreadline_76240(S_93127);
I_93140 = 0;
I_93140 = Utf8bom_93077(Line_93139);
LOC5 = Containsshebang_93087(Line_93139, I_93140);
if (!LOC5) goto LA6;
Line_93139 = Llstreamreadline_76240(S_93127);
I_93140 = 0;
LA6: ;
LOC9 = ((NU8)(Line_93139->data[I_93140]) == (NU8)(35));
if (!(LOC9)) goto LA10;
LOC9 = ((NU8)(Line_93139->data[(NI64)(I_93140 + 1)]) == (NU8)(33));
LA10: ;
if (!LOC9) goto LA11;
I_93140 += 2;
while (1) {
if (!(((NU8)(Line_93139->data[I_93140])) == ((NU8)(32)) || ((NU8)(Line_93139->data[I_93140])) == ((NU8)(9)) || ((NU8)(Line_93139->data[I_93140])) == ((NU8)(11)) || ((NU8)(Line_93139->data[I_93140])) == ((NU8)(13)) || ((NU8)(Line_93139->data[I_93140])) == ((NU8)(10)) || ((NU8)(Line_93139->data[I_93140])) == ((NU8)(12)))) goto LA13;
I_93140 += 1;
} LA13: ;
genericReset((void*)&Q_93180, NTI82011);
LOC14 = 0;
LOC14 = copyStr(Line_93139, I_93140);
LOC15 = 0;
LOC15 = Llstreamopen_76217(LOC14);
Openparser_82018(&Q_93180, Filename_93124, LOC15);
Result_93126 = Parseall_82014(&Q_93180);
Closeparser_82024(&Q_93180);
LA11: ;
Llstreamclose_76232(S_93127);
LA2: ;
return Result_93126;
}
N_NIMCALL(TY55011*, Getcallee_93258)(TY56526* N_93260) {
TY55011* Result_93261;
NIM_BOOL LOC2;
NimStringDesc* LOC8;
Result_93261 = 0;
Result_93261 = NIM_NIL;
LOC2 = ((*N_93260).Kind == ((NU8) 21));
if (!(LOC2)) goto LA3;
LOC2 = ((*(*N_93260).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA4;
Result_93261 = (*(*N_93260).KindU.S6.Sons->data[0]).KindU.S5.Ident;
goto LA1;
LA4: ;
if (!((*N_93260).Kind == ((NU8) 2))) goto LA6;
Result_93261 = (*N_93260).KindU.S5.Ident;
goto LA1;
LA6: ;
LOC8 = 0;
LOC8 = Rendertree_86042(N_93260, 0);
Rawmessage_49094(((NU8) 159), LOC8);
LA1: ;
return Result_93261;
}
N_NIMCALL(NU8, Getfilter_93184)(TY55011* Ident_93186) {
NU8 Result_93187;
NU8 I_93218;
NU8 Res_93220;
NIM_BOOL LOC3;
Result_93187 = 0;
I_93218 = 0;
Res_93220 = 0;
Res_93220 = ((NU8) 0);
while (1) {
if (!(Res_93220 <= ((NU8) 3))) goto LA1;
I_93218 = Res_93220;
LOC3 = Identeq_55028(Ident_93186, Filternames_93016[(I_93218)-0]);
if (!LOC3) goto LA4;
Result_93187 = I_93218;
goto BeforeRet;
LA4: ;
Res_93220 += 1;
} LA1: ;
Result_93187 = ((NU8) 0);
BeforeRet: ;
return Result_93187;
}
N_NIMCALL(NU8, Getparser_93221)(TY55011* Ident_93223) {
NU8 Result_93224;
NU8 I_93255;
NU8 Res_93257;
NIM_BOOL LOC3;
Result_93224 = 0;
I_93255 = 0;
Res_93257 = 0;
Res_93257 = ((NU8) 0);
while (1) {
if (!(Res_93257 <= ((NU8) 2))) goto LA1;
I_93255 = Res_93257;
LOC3 = Identeq_55028(Ident_93223, Parsernames_93012[(I_93255)-0]);
if (!LOC3) goto LA4;
Result_93224 = I_93255;
goto BeforeRet;
LA4: ;
Res_93257 += 1;
} LA1: ;
Rawmessage_49094(((NU8) 28), (*Ident_93223).S);
BeforeRet: ;
return Result_93224;
}
N_NIMCALL(TY76204*, Applyfilter_93337)(TY93028* P_93340, TY56526* N_93341, NimStringDesc* Filename_93342, TY76204* Stdin_93343) {
TY76204* Result_93344;
TY55011* Ident_93345;
NU8 F_93346;
TY47337 LOC7;
TY47337 LOC8;
Result_93344 = 0;
Ident_93345 = 0;
Result_93344 = NIM_NIL;
Ident_93345 = NIM_NIL;
Ident_93345 = Getcallee_93258(N_93341);
F_93346 = 0;
F_93346 = Getfilter_93184(Ident_93345);
switch (F_93346) {
case ((NU8) 0):
(*P_93340).Skin = Getparser_93221(Ident_93345);
Result_93344 = Stdin_93343;
break;
case ((NU8) 1):
Result_93344 = Filtertmpl_92001(Stdin_93343, Filename_93342, N_93341);
break;
case ((NU8) 3):
Result_93344 = Filterstrip_91009(Stdin_93343, Filename_93342, N_93341);
break;
case ((NU8) 2):
Result_93344 = Filterreplace_91004(Stdin_93343, Filename_93342, N_93341);
break;
}
if (!!((F_93346 == ((NU8) 0)))) goto LA2;
if (!(2 <= Gverbosity_47090)) goto LA5;
memset((void*)&LOC7, 0, sizeof(LOC7));
Rawmessage_49020(((NU8) 232), LOC7, 0);
Msgwriteln_48794((*Result_93344).S);
memset((void*)&LOC8, 0, sizeof(LOC8));
Rawmessage_49020(((NU8) 233), LOC8, 0);
LA5: ;
LA2: ;
return Result_93344;
}
N_NIMCALL(TY76204*, Evalpipe_93374)(TY93028* P_93377, TY56526* N_93378, NimStringDesc* Filename_93379, TY76204* Start_93380) {
TY76204* Result_93381;
NIM_BOOL LOC5;
NIM_BOOL LOC6;
NI I_93468;
NI Res_93536;
Result_93381 = 0;
Result_93381 = NIM_NIL;
Result_93381 = Start_93380;
if (!((*N_93378).Kind == ((NU8) 1))) goto LA2;
goto BeforeRet;
LA2: ;
LOC6 = ((*N_93378).Kind == ((NU8) 27));
if (!(LOC6)) goto LA7;
LOC6 = ((*(*N_93378).KindU.S6.Sons->data[0]).Kind == ((NU8) 2));
LA7: ;
LOC5 = LOC6;
if (!(LOC5)) goto LA8;
LOC5 = Identeq_55028((*(*N_93378).KindU.S6.Sons->data[0]).KindU.S5.Ident, ((NimStringDesc*) &TMP197743));
LA8: ;
if (!LOC5) goto LA9;
I_93468 = 0;
Res_93536 = 0;
Res_93536 = 1;
while (1) {
if (!(Res_93536 <= 2)) goto LA11;
I_93468 = Res_93536;
if (!((*(*N_93378).KindU.S6.Sons->data[I_93468]).Kind == ((NU8) 27))) goto LA13;
Result_93381 = Evalpipe_93374(P_93377, (*N_93378).KindU.S6.Sons->data[I_93468], Filename_93379, Result_93381);
goto LA12;
LA13: ;
Result_93381 = Applyfilter_93337(P_93377, (*N_93378).KindU.S6.Sons->data[I_93468], Filename_93379, Result_93381);
LA12: ;
Res_93536 += 1;
} LA11: ;
goto LA4;
LA9: ;
if (!((*N_93378).Kind == ((NU8) 101))) goto LA15;
Result_93381 = Evalpipe_93374(P_93377, (*N_93378).KindU.S6.Sons->data[0], Filename_93379, Result_93381);
goto LA4;
LA15: ;
Result_93381 = Applyfilter_93337(P_93377, N_93378, Filename_93379, Result_93381);
LA4: ;
BeforeRet: ;
return Result_93381;
}
N_NIMCALL(void, Openparsers_93034)(TY93028* P_93037, NimStringDesc* Filename_93038, TY76204* Inputstream_93039) {
TY76204* S_93543;
TY56526* Pipe_93544;
S_93543 = 0;
Pipe_93544 = 0;
S_93543 = NIM_NIL;
(*P_93037).Skin = ((NU8) 0);
Pipe_93544 = NIM_NIL;
Pipe_93544 = Parsepipe_93122(Filename_93038, Inputstream_93039);
if (!!((Pipe_93544 == NIM_NIL))) goto LA2;
S_93543 = Evalpipe_93374(P_93037, Pipe_93544, Filename_93038, Inputstream_93039);
goto LA1;
LA2: ;
S_93543 = Inputstream_93039;
LA1: ;
switch ((*P_93037).Skin) {
case ((NU8) 0):
case ((NU8) 1):
case ((NU8) 2):
Openparser_82018(&(*P_93037).Parser, Filename_93038, S_93543);
break;
}
}
N_NIMCALL(TY56526*, Parseall_93044)(TY93028* P_93047) {
TY56526* Result_93067;
Result_93067 = 0;
Result_93067 = NIM_NIL;
switch ((*P_93047).Skin) {
case ((NU8) 0):
Result_93067 = Parseall_82014(&(*P_93047).Parser);
break;
case ((NU8) 1):
Result_93067 = Parseall_84004(&(*P_93047).Parser);
break;
case ((NU8) 2):
Internalerror_49212(((NimStringDesc*) &TMP197874));
Result_93067 = Emptynode_56858;
break;
}
return Result_93067;
}
N_NIMCALL(void, Closeparsers_93040)(TY93028* P_93043) {
Closeparser_82024(&(*P_93043).Parser);
}
N_NIMCALL(TY56526*, Parsefile_93031)(NimStringDesc* Filename_93033) {
TY56526* Result_93055;
TY93028 P_93056;
FILE* F_93057;
NIM_BOOL LOC2;
TY76204* LOC5;
Result_93055 = 0;
memset((void*)&P_93056, 0, sizeof(P_93056));
Result_93055 = NIM_NIL;
genericReset((void*)&P_93056, NTI93028);
F_93057 = 0;
LOC2 = Open_3817(&F_93057, Filename_93033, ((NU8) 0), -1);
if (!!(LOC2)) goto LA3;
Rawmessage_49094(((NU8) 2), Filename_93033);
goto BeforeRet;
LA3: ;
LOC5 = 0;
LOC5 = Llstreamopen_76220(&F_93057);
Openparsers_93034(&P_93056, Filename_93033, LOC5);
Result_93055 = Parseall_93044(&P_93056);
Closeparsers_93040(&P_93056);
BeforeRet: ;
return Result_93055;
}
N_NIMCALL(TY56526*, Parsetoplevelstmt_93048)(TY93028* P_93051) {
TY56526* Result_93074;
Result_93074 = 0;
Result_93074 = NIM_NIL;
switch ((*P_93051).Skin) {
case ((NU8) 0):
Result_93074 = Parsetoplevelstmt_82028(&(*P_93051).Parser);
break;
case ((NU8) 1):
Result_93074 = Parsetoplevelstmt_84008(&(*P_93051).Parser);
break;
case ((NU8) 2):
Internalerror_49212(((NimStringDesc*) &TMP197874));
Result_93074 = Emptynode_56858;
break;
}
return Result_93074;
}
N_NOINLINE(void, syntaxesInit)(void) {
}

