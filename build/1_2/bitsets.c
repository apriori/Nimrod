/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY100008 TY100008;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
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
struct TY100008 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(void, unsureAsgnRef)(void** Dest_13026, void* Src_13027);
extern TNimType* NTI100008; /* TBitSet */
N_NIMCALL(void, Bitsetinit_100010)(TY100008** B_100013, NI Length_100014) {
unsureAsgnRef((void**) &(*B_100013), (TY100008*) newSeq(NTI100008, Length_100014));
}
N_NIMCALL(void, Bitsetincl_100035)(TY100008** X_100038, NI64 Elem_100039) {
(*X_100038)->data[(NI64)(Elem_100039 / 8)] = (NI8)((*X_100038)->data[(NI64)(Elem_100039 / 8)] | ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(Elem_100039 % 8))))))));
}
N_NIMCALL(void, Bitsetunion_100015)(TY100008** X_100018, TY100008* Y_100019) {
NI I_100121;
NI HEX3Atmp_100122;
NI Res_100124;
I_100121 = 0;
HEX3Atmp_100122 = 0;
HEX3Atmp_100122 = ((*X_100018)->Sup.len-1);
Res_100124 = 0;
Res_100124 = 0;
while (1) {
if (!(Res_100124 <= HEX3Atmp_100122)) goto LA1;
I_100121 = Res_100124;
(*X_100018)->data[I_100121] = (NI8)((*X_100018)->data[I_100121] | Y_100019->data[I_100121]);
Res_100124 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetdiff_100020)(TY100008** X_100023, TY100008* Y_100024) {
NI I_100138;
NI HEX3Atmp_100139;
NI Res_100141;
I_100138 = 0;
HEX3Atmp_100139 = 0;
HEX3Atmp_100139 = ((*X_100023)->Sup.len-1);
Res_100141 = 0;
Res_100141 = 0;
while (1) {
if (!(Res_100141 <= HEX3Atmp_100139)) goto LA1;
I_100138 = Res_100141;
(*X_100023)->data[I_100138] = (NI8)((*X_100023)->data[I_100138] & (NI8)((NU8) ~(Y_100024->data[I_100138])));
Res_100141 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetsymdiff_100025)(TY100008** X_100028, TY100008* Y_100029) {
NI I_100155;
NI HEX3Atmp_100156;
NI Res_100158;
I_100155 = 0;
HEX3Atmp_100156 = 0;
HEX3Atmp_100156 = ((*X_100028)->Sup.len-1);
Res_100158 = 0;
Res_100158 = 0;
while (1) {
if (!(Res_100158 <= HEX3Atmp_100156)) goto LA1;
I_100155 = Res_100158;
(*X_100028)->data[I_100155] = (NI8)((*X_100028)->data[I_100155] ^ Y_100029->data[I_100155]);
Res_100158 += 1;
} LA1: ;
}
N_NIMCALL(void, Bitsetintersect_100030)(TY100008** X_100033, TY100008* Y_100034) {
NI I_100172;
NI HEX3Atmp_100173;
NI Res_100175;
I_100172 = 0;
HEX3Atmp_100173 = 0;
HEX3Atmp_100173 = ((*X_100033)->Sup.len-1);
Res_100175 = 0;
Res_100175 = 0;
while (1) {
if (!(Res_100175 <= HEX3Atmp_100173)) goto LA1;
I_100172 = Res_100175;
(*X_100033)->data[I_100172] = (NI8)((*X_100033)->data[I_100172] & Y_100034->data[I_100172]);
Res_100175 += 1;
} LA1: ;
}
N_NIMCALL(NIM_BOOL, Bitsetin_100045)(TY100008* X_100047, NI64 E_100048) {
NIM_BOOL Result_100061;
Result_100061 = 0;
Result_100061 = !(((NI8)(X_100047->data[(NI64)(E_100048 / 8)] & ((NI8)(NU8)(NU)(((NI) ((NI64)((NU64)(1) << (NU64)((NI64)(E_100048 % 8)))))))) == ((NI8) 0)));
return Result_100061;
}
N_NIMCALL(NIM_BOOL, Bitsetcontains_100053)(TY100008* X_100055, TY100008* Y_100056) {
NIM_BOOL Result_100199;
NI I_100208;
NI HEX3Atmp_100211;
NI Res_100213;
Result_100199 = 0;
I_100208 = 0;
HEX3Atmp_100211 = 0;
HEX3Atmp_100211 = (X_100055->Sup.len-1);
Res_100213 = 0;
Res_100213 = 0;
while (1) {
if (!(Res_100213 <= HEX3Atmp_100211)) goto LA1;
I_100208 = Res_100213;
if (!!(((NI8)(X_100055->data[I_100208] & (NI8)((NU8) ~(Y_100056->data[I_100208]))) == ((NI8) 0)))) goto LA3;
Result_100199 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_100213 += 1;
} LA1: ;
Result_100199 = NIM_TRUE;
BeforeRet: ;
return Result_100199;
}
N_NIMCALL(NIM_BOOL, Bitsetequals_100049)(TY100008* X_100051, TY100008* Y_100052) {
NIM_BOOL Result_100180;
NI I_100189;
NI HEX3Atmp_100192;
NI Res_100194;
Result_100180 = 0;
I_100189 = 0;
HEX3Atmp_100192 = 0;
HEX3Atmp_100192 = (X_100051->Sup.len-1);
Res_100194 = 0;
Res_100194 = 0;
while (1) {
if (!(Res_100194 <= HEX3Atmp_100192)) goto LA1;
I_100189 = Res_100194;
if (!!((X_100051->data[I_100189] == Y_100052->data[I_100189]))) goto LA3;
Result_100180 = NIM_FALSE;
goto BeforeRet;
LA3: ;
Res_100194 += 1;
} LA1: ;
Result_100180 = NIM_TRUE;
BeforeRet: ;
return Result_100180;
}
N_NOINLINE(void, bitsetsInit)(void) {
}

