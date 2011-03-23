/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY51564 TY51564;
typedef struct TY51562 TY51562;
typedef struct TY51560 TY51560;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51552 TY51552;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51550 TY51550;
typedef struct TY51526 TY51526;
typedef struct TY51548 TY51548;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY47449 TY47449;
typedef struct TY43538 TY43538;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51544 TY51544;
typedef struct TY39013 TY39013;
struct TY51560 {
TY50005* Key;
TNimObject* Val;
};
struct TGenericSeq {
NI len;
NI space;
};
struct TY51564 {
NI Counter;
TY51562* Data;
};
typedef TY51564 TY158204[40];
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
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
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
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY47449 {
NimStringDesc* Name;
NI Intsize;
NU8 Endian;
NI Floatsize;
NI Bit;
};
typedef TY47449 TY47462[13];
struct TY43538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
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
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY51562 {
  TGenericSeq Sup;
  TY51560 data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, Inittypetables_158206)(void);
N_NIMCALL(void, Initidtable_51755)(TY51564* X_51758);
N_NIMCALL(TNimObject*, Idtableget_56158)(TY51564 T_56160, TY50005* Key_56161);
N_NIMCALL(void, Idtableput_56166)(TY51564* T_56169, TY50005* Key_56170, TNimObject* Val_56171);
N_NIMCALL(TY51552*, Getuniquetype_158242)(TY51552* Key_158244);
static N_INLINE(TY51552*, Lastson_51813)(TY51552* N_51815);
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809);
N_NIMCALL(NIM_BOOL, Idtablehasobjectaskey_56172)(TY51564 T_56174, TY50005* Key_56175);
N_NIMCALL(NIM_BOOL, Sametype_94048)(TY51552* X_94050, TY51552* Y_94051);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void, App_48031)(TY48008** A_48034, TY48008* B_48035);
N_NIMCALL(TY48008*, Torope_48046)(NimStringDesc* S_48048);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* S_18632, NI Newlen_18633);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 X_25409, NI Len_25410);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18589, NI Addlen_18590);
N_NIMCALL(NimStringDesc*, Tocchar_158339)(NIM_CHAR C_158341);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, nsuToOctal)(NIM_CHAR C_25035);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR X_19334);
N_NIMCALL(TY51526*, Getpragmastmt_158054)(TY51526* N_158056, NU8 W_158057);
static N_INLINE(NI, Len_52940)(TY51526* N_52942);
static N_INLINE(TY51526*, HEX5BHEX5D_53137)(TY51526* N_53139, NI I_53140);
N_NIMCALL(NU8, Whichpragma_158007)(TY51526* N_158009);
N_NIMCALL(NU8, Whichkeyword_69492)(TY50011* Id_69494);
STRING_LITERAL(TMP194350, "c\"", 2);
STRING_LITERAL(TMP194351, "\\00\"", 4);
STRING_LITERAL(TMP194353, "\"", 1);
STRING_LITERAL(TMP194354, "\015\012", 2);
extern NIM_CONST TY47462 Cpu_47461;
TY158204 Gtypetable_158205;
extern NU8 Targetcpu_47568;
N_NIMCALL(void, Inittypetables_158206)(void) {
NU8 I_158238;
NU8 Res_158241;
I_158238 = 0;
Res_158241 = 0;
Res_158241 = ((NU8) 0);
while (1) {
if (!(Res_158241 <= ((NU8) 39))) goto LA1;
I_158238 = Res_158241;
Initidtable_51755(&Gtypetable_158205[(I_158238)-0]);
Res_158241 += 1;
} LA1: ;
}
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809) {
NI Result_52761;
Result_52761 = 0;
if (!(*N_51809).Sons == 0) goto LA2;
Result_52761 = 0;
goto LA1;
LA2: ;
Result_52761 = (*N_51809).Sons->Sup.len;
LA1: ;
return Result_52761;
}
static N_INLINE(TY51552*, Lastson_51813)(TY51552* N_51815) {
TY51552* Result_53932;
NI LOC1;
Result_53932 = 0;
Result_53932 = NIM_NIL;
LOC1 = Sonslen_51807(N_51815);
Result_53932 = (*N_51815).Sons->data[(NI64)(LOC1 - 1)];
return Result_53932;
}
N_NIMCALL(TY51552*, Getuniquetype_158242)(TY51552* Key_158244) {
TY51552* Result_158245;
TY51552* T_158246;
NU8 K_158247;
TNimObject* LOC4;
TY51552* LOC8;
NIM_BOOL LOC10;
NI H_158279;
NI HEX3Atmp_158292;
NI Res_158294;
NIM_BOOL LOC15;
Result_158245 = 0;
T_158246 = 0;
Result_158245 = NIM_NIL;
T_158246 = NIM_NIL;
K_158247 = 0;
Result_158245 = Key_158244;
if (!(Key_158244 == NIM_NIL)) goto LA2;
goto BeforeRet;
LA2: ;
K_158247 = (*Key_158244).Kind;
switch (K_158247) {
case ((NU8) 17):
case ((NU8) 14):
LOC4 = 0;
LOC4 = Idtableget_56158(Gtypetable_158205[(K_158247)-0], &Key_158244->Sup);
Result_158245 = ((TY51552*) (LOC4));
if (!(Result_158245 == NIM_NIL)) goto LA6;
Idtableput_56166(&Gtypetable_158205[(K_158247)-0], &Key_158244->Sup, &Key_158244->Sup.Sup);
Result_158245 = Key_158244;
LA6: ;
break;
case ((NU8) 11):
case ((NU8) 13):
case ((NU8) 15):
LOC8 = 0;
LOC8 = Lastson_51813(Key_158244);
Result_158245 = Getuniquetype_158242(LOC8);
break;
case ((NU8) 25):
break;
default:
LOC10 = Idtablehasobjectaskey_56172(Gtypetable_158205[(K_158247)-0], &Key_158244->Sup);
if (!LOC10) goto LA11;
goto BeforeRet;
LA11: ;
H_158279 = 0;
HEX3Atmp_158292 = 0;
HEX3Atmp_158292 = (Gtypetable_158205[(K_158247)-0].Data->Sup.len-1);
Res_158294 = 0;
Res_158294 = 0;
while (1) {
if (!(Res_158294 <= HEX3Atmp_158292)) goto LA13;
H_158279 = Res_158294;
T_158246 = ((TY51552*) (Gtypetable_158205[(K_158247)-0].Data->data[H_158279].Key));
LOC15 = !((T_158246 == NIM_NIL));
if (!(LOC15)) goto LA16;
LOC15 = Sametype_94048(T_158246, Key_158244);
LA16: ;
if (!LOC15) goto LA17;
Result_158245 = T_158246;
goto BeforeRet;
LA17: ;
Res_158294 += 1;
} LA13: ;
Idtableput_56166(&Gtypetable_158205[(K_158247)-0], &Key_158244->Sup, &Key_158244->Sup.Sup);
break;
}
BeforeRet: ;
return Result_158245;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(TY48008*, Makellvmstring_158369)(NimStringDesc* S_158371) {
TY48008* Result_158372;
NimStringDesc* Res_158374;
NI I_158385;
NI HEX3Atmp_158395;
NI Res_158397;
TY48008* LOC5;
NimStringDesc* LOC6;
TY48008* LOC7;
Result_158372 = 0;
Res_158374 = 0;
Result_158372 = NIM_NIL;
Res_158374 = NIM_NIL;
Result_158372 = NIM_NIL;
Res_158374 = copyString(((NimStringDesc*) &TMP194350));
I_158385 = 0;
HEX3Atmp_158395 = 0;
HEX3Atmp_158395 = (NI64)((NI64)(S_158371->Sup.len + 0) - 1);
Res_158397 = 0;
Res_158397 = 0;
while (1) {
if (!(Res_158397 <= HEX3Atmp_158395)) goto LA1;
I_158385 = Res_158397;
if (!((NI64)((NI64)((NI64)(I_158385 - 0) + 1) % 64) == 0)) goto LA3;
LOC5 = 0;
LOC5 = Torope_48046(Res_158374);
App_48031(&Result_158372, LOC5);
Res_158374 = setLengthStr(Res_158374, 0);
LA3: ;
switch (((NU8)(S_158371->data[I_158385]))) {
case 0 ... 31:
case 128 ... 255:
case 34:
case 92:
Res_158374 = addChar(Res_158374, 92);
LOC6 = 0;
LOC6 = nsuToHex(((NI64) (((NU8)(S_158371->data[I_158385])))), 2);
Res_158374 = resizeString(Res_158374, LOC6->Sup.len + 0);
appendString(Res_158374, LOC6);
break;
default:
Res_158374 = addChar(Res_158374, S_158371->data[I_158385]);
break;
}
Res_158397 += 1;
} LA1: ;
Res_158374 = resizeString(Res_158374, 4);
appendString(Res_158374, ((NimStringDesc*) &TMP194351));
LOC7 = 0;
LOC7 = Torope_48046(Res_158374);
App_48031(&Result_158372, LOC7);
return Result_158372;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI64)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(NimStringDesc*, Tocchar_158339)(NIM_CHAR C_158341) {
NimStringDesc* Result_158342;
NimStringDesc* LOC1;
NimStringDesc* LOC2;
NimStringDesc* LOC3;
Result_158342 = 0;
Result_158342 = NIM_NIL;
switch (((NU8)(C_158341))) {
case 0 ... 31:
case 128 ... 255:
LOC1 = 0;
LOC2 = 0;
LOC2 = nsuToOctal(C_158341);
LOC1 = rawNewString(LOC2->Sup.len + 1);
appendChar(LOC1, 92);
appendString(LOC1, LOC2);
Result_158342 = LOC1;
break;
case 39:
case 34:
case 92:
LOC3 = 0;
LOC3 = rawNewString(2);
appendChar(LOC3, 92);
appendChar(LOC3, C_158341);
Result_158342 = LOC3;
break;
default:
Result_158342 = nimCharToStr(C_158341);
break;
}
return Result_158342;
}
N_NIMCALL(TY48008*, Makecstring_158345)(NimStringDesc* S_158347) {
TY48008* Result_158348;
NimStringDesc* Res_158350;
NI I_158361;
NI HEX3Atmp_158366;
NI Res_158368;
TY48008* LOC5;
NimStringDesc* LOC6;
TY48008* LOC7;
Result_158348 = 0;
Res_158350 = 0;
Result_158348 = NIM_NIL;
Res_158350 = NIM_NIL;
Result_158348 = NIM_NIL;
Res_158350 = copyString(((NimStringDesc*) &TMP194353));
I_158361 = 0;
HEX3Atmp_158366 = 0;
HEX3Atmp_158366 = (NI64)((NI64)(S_158347->Sup.len + 0) - 1);
Res_158368 = 0;
Res_158368 = 0;
while (1) {
if (!(Res_158368 <= HEX3Atmp_158366)) goto LA1;
I_158361 = Res_158368;
if (!((NI64)((NI64)((NI64)(I_158361 - 0) + 1) % 64) == 0)) goto LA3;
Res_158350 = addChar(Res_158350, 34);
Res_158350 = resizeString(Res_158350, 2);
appendString(Res_158350, ((NimStringDesc*) &TMP194354));
LOC5 = 0;
LOC5 = Torope_48046(Res_158350);
App_48031(&Result_158348, LOC5);
Res_158350 = setLengthStr(Res_158350, 1);
Res_158350->data[0] = 34;
LA3: ;
LOC6 = 0;
LOC6 = Tocchar_158339(S_158347->data[I_158361]);
Res_158350 = resizeString(Res_158350, LOC6->Sup.len + 0);
appendString(Res_158350, LOC6);
Res_158368 += 1;
} LA1: ;
Res_158350 = addChar(Res_158350, 34);
LOC7 = 0;
LOC7 = Torope_48046(Res_158350);
App_48031(&Result_158348, LOC7);
return Result_158348;
}
N_NIMCALL(NI64, Hashstring_158158)(NimStringDesc* S_158160) {
NI64 Result_158161;
NI64 B_158164;
NI I_158175;
NI HEX3Atmp_158198;
NI Res_158200;
NI32 A_158181;
NI I_158192;
NI HEX3Atmp_158201;
NI Res_158203;
Result_158161 = 0;
if (!(Cpu_47461[(Targetcpu_47568)-1].Bit == 64)) goto LA2;
B_158164 = 0;
B_158164 = 0;
I_158175 = 0;
HEX3Atmp_158198 = 0;
HEX3Atmp_158198 = (NI64)(S_158160->Sup.len - 1);
Res_158200 = 0;
Res_158200 = 0;
while (1) {
if (!(Res_158200 <= HEX3Atmp_158198)) goto LA4;
I_158175 = Res_158200;
B_158164 = (NI64)((NU64)(B_158164) + (NU64)(((NI64) (((NU8)(S_158160->data[I_158175]))))));
B_158164 = (NI64)((NU64)(B_158164) + (NU64)((NI64)((NU64)(B_158164) << (NU64)(10))));
B_158164 = (B_158164 ^ (NI64)((NU64)(B_158164) >> (NU64)(6)));
Res_158200 += 1;
} LA4: ;
B_158164 = (NI64)((NU64)(B_158164) + (NU64)((NI64)((NU64)(B_158164) << (NU64)(3))));
B_158164 = (B_158164 ^ (NI64)((NU64)(B_158164) >> (NU64)(11)));
B_158164 = (NI64)((NU64)(B_158164) + (NU64)((NI64)((NU64)(B_158164) << (NU64)(15))));
Result_158161 = B_158164;
goto LA1;
LA2: ;
A_158181 = 0;
A_158181 = ((NI32) 0);
I_158192 = 0;
HEX3Atmp_158201 = 0;
HEX3Atmp_158201 = (NI64)(S_158160->Sup.len - 1);
Res_158203 = 0;
Res_158203 = 0;
while (1) {
if (!(Res_158203 <= HEX3Atmp_158201)) goto LA5;
I_158192 = Res_158203;
A_158181 = (NI32)((NU32)(A_158181) + (NU32)(((NI32) (((NU8)(S_158160->data[I_158192]))))));
A_158181 = (NI32)((NU32)(A_158181) + (NU32)((NI32)((NU32)(A_158181) << (NU32)(((NI32) 10)))));
A_158181 = (NI32)(A_158181 ^ (NI32)((NU32)(A_158181) >> (NU32)(((NI32) 6))));
Res_158203 += 1;
} LA5: ;
A_158181 = (NI32)((NU32)(A_158181) + (NU32)((NI32)((NU32)(A_158181) << (NU32)(((NI32) 3)))));
A_158181 = (NI32)(A_158181 ^ (NI32)((NU32)(A_158181) >> (NU32)(((NI32) 11))));
A_158181 = (NI32)((NU32)(A_158181) + (NU32)((NI32)((NU32)(A_158181) << (NU32)(((NI32) 15)))));
Result_158161 = ((NI64) (A_158181));
LA1: ;
return Result_158161;
}
static N_INLINE(NI, Len_52940)(TY51526* N_52942) {
NI Result_52943;
Result_52943 = 0;
if (!(*N_52942).KindU.S6.Sons == 0) goto LA2;
Result_52943 = 0;
goto LA1;
LA2: ;
Result_52943 = (*N_52942).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_52943;
}
static N_INLINE(TY51526*, HEX5BHEX5D_53137)(TY51526* N_53139, NI I_53140) {
TY51526* Result_53141;
Result_53141 = 0;
Result_53141 = NIM_NIL;
Result_53141 = (*N_53139).KindU.S6.Sons->data[I_53140];
return Result_53141;
}
N_NIMCALL(NU8, Whichpragma_158007)(TY51526* N_158009) {
NU8 Result_158010;
TY51526* Key_158032;
TY51526* LOC1;
Key_158032 = 0;
Result_158010 = 0;
Key_158032 = NIM_NIL;
LOC1 = 0;
if (!((*N_158009).Kind == ((NU8) 24))) goto LA3;
LOC1 = (*N_158009).KindU.S6.Sons->data[0];
goto LA2;
LA3: ;
LOC1 = N_158009;
LA2: ;
Key_158032 = LOC1;
if (!((*Key_158032).Kind == ((NU8) 2))) goto LA5;
Result_158010 = Whichkeyword_69492((*Key_158032).KindU.S5.Ident);
LA5: ;
return Result_158010;
}
N_NIMCALL(TY51526*, Getpragmastmt_158054)(TY51526* N_158056, NU8 W_158057) {
TY51526* Result_158058;
NI I_158094;
NI HEX3Atmp_158136;
NI LOC1;
NI Res_158138;
TY51526* LOC3;
NI I_158126;
NI HEX3Atmp_158139;
NI LOC7;
NI Res_158141;
TY51526* LOC10;
NU8 LOC11;
Result_158058 = 0;
Result_158058 = NIM_NIL;
switch ((*N_158056).Kind) {
case ((NU8) 101):
I_158094 = 0;
HEX3Atmp_158136 = 0;
LOC1 = Len_52940(N_158056);
HEX3Atmp_158136 = LOC1 - 1;
Res_158138 = 0;
Res_158138 = 0;
while (1) {
if (!(Res_158138 <= HEX3Atmp_158136)) goto LA2;
I_158094 = Res_158138;
LOC3 = 0;
LOC3 = HEX5BHEX5D_53137(N_158056, I_158094);
Result_158058 = Getpragmastmt_158054(LOC3, W_158057);
if (!!((Result_158058 == NIM_NIL))) goto LA5;
goto LA2;
LA5: ;
Res_158138 += 1;
} LA2: ;
break;
case ((NU8) 81):
I_158126 = 0;
HEX3Atmp_158139 = 0;
LOC7 = Len_52940(N_158056);
HEX3Atmp_158139 = LOC7 - 1;
Res_158141 = 0;
Res_158141 = 0;
while (1) {
if (!(Res_158141 <= HEX3Atmp_158139)) goto LA8;
I_158126 = Res_158141;
LOC10 = 0;
LOC10 = HEX5BHEX5D_53137(N_158056, I_158126);
LOC11 = Whichpragma_158007(LOC10);
if (!(LOC11 == W_158057)) goto LA12;
Result_158058 = HEX5BHEX5D_53137(N_158056, I_158126);
goto BeforeRet;
LA12: ;
Res_158141 += 1;
} LA8: ;
break;
default:
break;
}
BeforeRet: ;
return Result_158058;
}
N_NIMCALL(NIM_BOOL, Stmtscontainpragma_158142)(TY51526* N_158144, NU8 W_158145) {
NIM_BOOL Result_158146;
TY51526* LOC1;
Result_158146 = 0;
LOC1 = 0;
LOC1 = Getpragmastmt_158054(N_158144, W_158145);
Result_158146 = !((LOC1 == NIM_NIL));
return Result_158146;
}
N_NOINLINE(void, ccgutilsInit)(void) {
Inittypetables_158206();
}

