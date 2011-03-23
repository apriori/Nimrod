/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY56526 TY56526;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY56552 TY56552;
typedef struct TY48538 TY48538;
typedef struct TY56548 TY56548;
typedef struct TY55011 TY55011;
typedef struct TY56520 TY56520;
typedef struct TY76204 TY76204;
typedef struct TY55005 TY55005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct TY76204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
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
N_NIMCALL(TY56526*, Getarg_91036)(TY56526* N_91038, NimStringDesc* Name_91039, NI Pos_91040);
static N_INLINE(NI, Sonslen_56804)(TY56526* N_56806);
N_NIMCALL(void, Invalidpragma_91032)(TY56526* N_91034);
N_NIMCALL(void, Localerror_49193)(TY48538 Info_49195, NU8 Msg_49196, NimStringDesc* Arg_49197);
N_NIMCALL(NimStringDesc*, Rendertree_86042)(TY56526* N_86044, NU8 Renderflags_86047);
N_NIMCALL(NIM_BOOL, Identeq_55028)(TY55011* Id_55030, NimStringDesc* Name_55031);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18712);
N_NIMCALL(NimStringDesc*, Strarg_91020)(TY56526* N_91022, NimStringDesc* Name_91023, NI Pos_91024, NimStringDesc* Default_91025);
N_NIMCALL(NIM_BOOL, Boolarg_91026)(TY56526* N_91028, NimStringDesc* Name_91029, NI Pos_91030, NIM_BOOL Default_91031);
N_NIMCALL(TY76204*, Llstreamopen_76217)(NimStringDesc* Data_76219);
N_NIMCALL(NIM_BOOL, Llstreamatend_76263)(TY76204* S_76265);
N_NIMCALL(NimStringDesc*, Llstreamreadline_76240)(TY76204* S_76242);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* S_24975, NIM_BOOL Leading_24976, NIM_BOOL Trailing_24977);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* S_25853, NimStringDesc* Prefix_25854);
N_NIMCALL(void, Llstreamwriteln_76259)(TY76204* S_76261, NimStringDesc* Data_76262);
N_NIMCALL(void, Llstreamclose_76232)(TY76204* S_76234);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* S_26301, NimStringDesc* Sub_26302, NimStringDesc* By_26303);
STRING_LITERAL(TMP197863, "startswith", 10);
STRING_LITERAL(TMP197864, "", 0);
STRING_LITERAL(TMP197865, "true", 4);
STRING_LITERAL(TMP197866, "false", 5);
STRING_LITERAL(TMP197867, "leading", 7);
STRING_LITERAL(TMP197868, "trailing", 8);
STRING_LITERAL(TMP197869, "sub", 3);
STRING_LITERAL(TMP197870, "by", 2);
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
N_NIMCALL(void, Invalidpragma_91032)(TY56526* N_91034) {
NimStringDesc* LOC1;
LOC1 = 0;
LOC1 = Rendertree_86042(N_91034, 4);
Localerror_49193((*N_91034).Info, ((NU8) 159), LOC1);
}
N_NIMCALL(TY56526*, Getarg_91036)(TY56526* N_91038, NimStringDesc* Name_91039, NI Pos_91040) {
TY56526* Result_91041;
NI I_91077;
NI HEX3Atmp_91206;
NI LOC4;
NI Res_91208;
NIM_BOOL LOC13;
Result_91041 = 0;
Result_91041 = NIM_NIL;
Result_91041 = NIM_NIL;
if (!((*N_91038).Kind >= ((NU8) 1) && (*N_91038).Kind <= ((NU8) 18))) goto LA2;
goto BeforeRet;
LA2: ;
I_91077 = 0;
HEX3Atmp_91206 = 0;
LOC4 = Sonslen_56804(N_91038);
HEX3Atmp_91206 = (NI64)(LOC4 - 1);
Res_91208 = 0;
Res_91208 = 1;
while (1) {
if (!(Res_91208 <= HEX3Atmp_91206)) goto LA5;
I_91077 = Res_91208;
if (!((*(*N_91038).KindU.S6.Sons->data[I_91077]).Kind == ((NU8) 23))) goto LA7;
if (!!(((*(*(*N_91038).KindU.S6.Sons->data[I_91077]).KindU.S6.Sons->data[0]).Kind == ((NU8) 2)))) goto LA10;
Invalidpragma_91032(N_91038);
LA10: ;
LOC13 = Identeq_55028((*(*(*N_91038).KindU.S6.Sons->data[I_91077]).KindU.S6.Sons->data[0]).KindU.S5.Ident, Name_91039);
if (!LOC13) goto LA14;
Result_91041 = (*(*N_91038).KindU.S6.Sons->data[I_91077]).KindU.S6.Sons->data[1];
goto BeforeRet;
LA14: ;
goto LA6;
LA7: ;
if (!(I_91077 == Pos_91040)) goto LA16;
Result_91041 = (*N_91038).KindU.S6.Sons->data[I_91077];
goto BeforeRet;
goto LA6;
LA16: ;
LA6: ;
Res_91208 += 1;
} LA5: ;
BeforeRet: ;
return Result_91041;
}
N_NIMCALL(NIM_CHAR, Chararg_91014)(TY56526* N_91016, NimStringDesc* Name_91017, NI Pos_91018, NIM_CHAR Default_91019) {
NIM_CHAR Result_91215;
TY56526* X_91216;
X_91216 = 0;
Result_91215 = 0;
X_91216 = NIM_NIL;
X_91216 = Getarg_91036(N_91016, Name_91017, Pos_91018);
if (!(X_91216 == NIM_NIL)) goto LA2;
Result_91215 = Default_91019;
goto LA1;
LA2: ;
if (!((*X_91216).Kind == ((NU8) 5))) goto LA4;
Result_91215 = ((NIM_CHAR) (((NI) (((NI) ((*X_91216).KindU.S1.Intval))))));
goto LA1;
LA4: ;
Invalidpragma_91032(N_91016);
LA1: ;
return Result_91215;
}
N_NIMCALL(NimStringDesc*, Strarg_91020)(TY56526* N_91022, NimStringDesc* Name_91023, NI Pos_91024, NimStringDesc* Default_91025) {
NimStringDesc* Result_91255;
TY56526* X_91256;
Result_91255 = 0;
X_91256 = 0;
Result_91255 = NIM_NIL;
X_91256 = NIM_NIL;
X_91256 = Getarg_91036(N_91022, Name_91023, Pos_91024);
if (!(X_91256 == NIM_NIL)) goto LA2;
Result_91255 = copyString(Default_91025);
goto LA1;
LA2: ;
if (!((*X_91256).Kind >= ((NU8) 14) && (*X_91256).Kind <= ((NU8) 16))) goto LA4;
Result_91255 = copyString((*X_91256).KindU.S3.Strval);
goto LA1;
LA4: ;
Invalidpragma_91032(N_91022);
LA1: ;
return Result_91255;
}
N_NIMCALL(NIM_BOOL, Boolarg_91026)(TY56526* N_91028, NimStringDesc* Name_91029, NI Pos_91030, NIM_BOOL Default_91031) {
NIM_BOOL Result_91298;
TY56526* X_91299;
NIM_BOOL LOC4;
NIM_BOOL LOC8;
X_91299 = 0;
Result_91298 = 0;
X_91299 = NIM_NIL;
X_91299 = Getarg_91036(N_91028, Name_91029, Pos_91030);
if (!(X_91299 == NIM_NIL)) goto LA2;
Result_91298 = Default_91031;
goto LA1;
LA2: ;
LOC4 = ((*X_91299).Kind == ((NU8) 2));
if (!(LOC4)) goto LA5;
LOC4 = Identeq_55028((*X_91299).KindU.S5.Ident, ((NimStringDesc*) &TMP197865));
LA5: ;
if (!LOC4) goto LA6;
Result_91298 = NIM_TRUE;
goto LA1;
LA6: ;
LOC8 = ((*X_91299).Kind == ((NU8) 2));
if (!(LOC8)) goto LA9;
LOC8 = Identeq_55028((*X_91299).KindU.S5.Ident, ((NimStringDesc*) &TMP197866));
LA9: ;
if (!LOC8) goto LA10;
Result_91298 = NIM_FALSE;
goto LA1;
LA10: ;
Invalidpragma_91032(N_91028);
LA1: ;
return Result_91298;
}
N_NIMCALL(TY76204*, Filterstrip_91009)(TY76204* Stdin_91011, NimStringDesc* Filename_91012, TY56526* Call_91013) {
TY76204* Result_91358;
NimStringDesc* Pattern_91359;
NIM_BOOL Leading_91360;
NIM_BOOL Trailing_91361;
NIM_BOOL LOC2;
NimStringDesc* Line_91362;
NimStringDesc* Stripped_91363;
NIM_BOOL LOC4;
Result_91358 = 0;
Pattern_91359 = 0;
Line_91362 = 0;
Stripped_91363 = 0;
Result_91358 = NIM_NIL;
Pattern_91359 = NIM_NIL;
Pattern_91359 = Strarg_91020(Call_91013, ((NimStringDesc*) &TMP197863), 1, ((NimStringDesc*) &TMP197864));
Leading_91360 = 0;
Leading_91360 = Boolarg_91026(Call_91013, ((NimStringDesc*) &TMP197867), 2, NIM_TRUE);
Trailing_91361 = 0;
Trailing_91361 = Boolarg_91026(Call_91013, ((NimStringDesc*) &TMP197868), 3, NIM_TRUE);
Result_91358 = Llstreamopen_76217(((NimStringDesc*) &TMP197864));
while (1) {
LOC2 = Llstreamatend_76263(Stdin_91011);
if (!!(LOC2)) goto LA1;
Line_91362 = NIM_NIL;
Line_91362 = Llstreamreadline_76240(Stdin_91011);
Stripped_91363 = NIM_NIL;
Stripped_91363 = nsuStrip(Line_91362, Leading_91360, Trailing_91361);
LOC4 = (Pattern_91359->Sup.len == 0);
if (LOC4) goto LA5;
LOC4 = nsuStartsWith(Stripped_91363, Pattern_91359);
LA5: ;
if (!LOC4) goto LA6;
Llstreamwriteln_76259(Result_91358, Stripped_91363);
goto LA3;
LA6: ;
Llstreamwriteln_76259(Result_91358, Line_91362);
LA3: ;
} LA1: ;
Llstreamclose_76232(Stdin_91011);
return Result_91358;
}
N_NIMCALL(TY76204*, Filterreplace_91004)(TY76204* Stdin_91006, NimStringDesc* Filename_91007, TY56526* Call_91008) {
TY76204* Result_91373;
NimStringDesc* Sub_91374;
NimStringDesc* By_91379;
NIM_BOOL LOC5;
NimStringDesc* Line_91380;
NimStringDesc* LOC6;
Result_91373 = 0;
Sub_91374 = 0;
By_91379 = 0;
Line_91380 = 0;
Result_91373 = NIM_NIL;
Sub_91374 = NIM_NIL;
Sub_91374 = Strarg_91020(Call_91008, ((NimStringDesc*) &TMP197869), 1, ((NimStringDesc*) &TMP197864));
if (!(Sub_91374->Sup.len == 0)) goto LA2;
Invalidpragma_91032(Call_91008);
LA2: ;
By_91379 = NIM_NIL;
By_91379 = Strarg_91020(Call_91008, ((NimStringDesc*) &TMP197870), 2, ((NimStringDesc*) &TMP197864));
Result_91373 = Llstreamopen_76217(((NimStringDesc*) &TMP197864));
while (1) {
LOC5 = Llstreamatend_76263(Stdin_91006);
if (!!(LOC5)) goto LA4;
Line_91380 = NIM_NIL;
Line_91380 = Llstreamreadline_76240(Stdin_91006);
LOC6 = 0;
LOC6 = nsuReplaceStr(Line_91380, Sub_91374, By_91379);
Llstreamwriteln_76259(Result_91373, LOC6);
} LA4: ;
Llstreamclose_76232(Stdin_91006);
return Result_91373;
}
N_NOINLINE(void, filtersInit)(void) {
}

