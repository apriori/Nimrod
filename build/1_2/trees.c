/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct TY51526 TY51526;
typedef struct TY51552 TY51552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY43538 TY43538;
typedef struct TY51548 TY51548;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY51550 TY51550;
typedef struct TY39013 TY39013;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
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
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
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
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
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
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY51526*, Newnodei_51738)(NU8 Kind_51740, TY43538 Info_51741);
N_NIMCALL(NIM_BOOL, Cyclictreeaux_93099)(TY51526* N_93101, TY51526* S_93102);
N_NIMCALL(NIM_BOOL, Hasson_93046)(TY51526* Father_93048, TY51526* Son_93049);
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806);
N_NIMCALL(void, Addson_51824)(TY51526* Father_51826, TY51526* Son_51827);
N_NIMCALL(void, Delson_51832)(TY51526* Father_51834, NI Idx_51835);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450);
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_93035)(TY51526* A_93037, TY51526* B_93038);
N_NIMCALL(NU8, Getmagic_93013)(TY51526* Op_93015) {
NU8 Result_93682;
Result_93682 = 0;
switch ((*Op_93015).Kind) {
case ((NU8) 21):
case ((NU8) 49):
case ((NU8) 20):
case ((NU8) 22):
switch ((*(*Op_93015).KindU.S6.Sons->data[0]).Kind) {
case ((NU8) 3):
Result_93682 = (*(*(*Op_93015).KindU.S6.Sons->data[0]).KindU.S4.Sym).Magic;
break;
default:
Result_93682 = ((NU8) 0);
break;
}
break;
default:
Result_93682 = ((NU8) 0);
break;
}
return Result_93682;
}
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
N_NIMCALL(NIM_BOOL, Hasson_93046)(TY51526* Father_93048, TY51526* Son_93049) {
NIM_BOOL Result_93050;
NI I_93074;
NI HEX3Atmp_93096;
NI LOC1;
NI Res_93098;
Result_93050 = 0;
I_93074 = 0;
HEX3Atmp_93096 = 0;
LOC1 = Sonslen_51804(Father_93048);
HEX3Atmp_93096 = (NI64)(LOC1 - 1);
Res_93098 = 0;
Res_93098 = 0;
while (1) {
if (!(Res_93098 <= HEX3Atmp_93096)) goto LA2;
I_93074 = Res_93098;
if (!((*Father_93048).KindU.S6.Sons->data[I_93074] == Son_93049)) goto LA4;
Result_93050 = NIM_TRUE;
goto BeforeRet;
LA4: ;
Res_93098 += 1;
} LA2: ;
Result_93050 = NIM_FALSE;
BeforeRet: ;
return Result_93050;
}
N_NIMCALL(NIM_BOOL, Cyclictreeaux_93099)(TY51526* N_93101, TY51526* S_93102) {
NIM_BOOL Result_93103;
NIM_BOOL LOC5;
NI M_93115;
NI I_93136;
NI HEX3Atmp_93149;
NI LOC11;
NI Res_93151;
NIM_BOOL LOC14;
Result_93103 = 0;
if (!(N_93101 == NIM_NIL)) goto LA2;
Result_93103 = NIM_FALSE;
goto BeforeRet;
LA2: ;
LOC5 = Hasson_93046(S_93102, N_93101);
if (!LOC5) goto LA6;
Result_93103 = NIM_TRUE;
goto BeforeRet;
LA6: ;
M_93115 = 0;
M_93115 = Sonslen_51804(S_93102);
Addson_51824(S_93102, N_93101);
if (!!(((*N_93101).Kind >= ((NU8) 1) && (*N_93101).Kind <= ((NU8) 18)))) goto LA9;
I_93136 = 0;
HEX3Atmp_93149 = 0;
LOC11 = Sonslen_51804(N_93101);
HEX3Atmp_93149 = (NI64)(LOC11 - 1);
Res_93151 = 0;
Res_93151 = 0;
while (1) {
if (!(Res_93151 <= HEX3Atmp_93149)) goto LA12;
I_93136 = Res_93151;
LOC14 = Cyclictreeaux_93099((*N_93101).KindU.S6.Sons->data[I_93136], S_93102);
if (!LOC14) goto LA15;
Result_93103 = NIM_TRUE;
goto BeforeRet;
LA15: ;
Res_93151 += 1;
} LA12: ;
LA9: ;
Result_93103 = NIM_FALSE;
Delson_51832(S_93102, M_93115);
BeforeRet: ;
return Result_93103;
}
N_NIMCALL(NIM_BOOL, Cyclictree_93043)(TY51526* N_93045) {
NIM_BOOL Result_93155;
TY51526* S_93156;
S_93156 = 0;
Result_93155 = 0;
S_93156 = NIM_NIL;
S_93156 = Newnodei_51738(((NU8) 1), (*N_93045).Info);
Result_93155 = Cyclictreeaux_93099(N_93045, S_93156);
return Result_93155;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450) {
NIM_BOOL Result_18451;
NIM_BOOL LOC5;
NIM_BOOL LOC9;
NI32 LOC11;
Result_18451 = 0;
if (!(A_18449 == B_18450)) goto LA2;
Result_18451 = NIM_TRUE;
goto BeforeRet;
LA2: ;
LOC5 = (A_18449 == NIM_NIL);
if (LOC5) goto LA6;
LOC5 = (B_18450 == NIM_NIL);
LA6: ;
if (!LOC5) goto LA7;
Result_18451 = NIM_FALSE;
goto BeforeRet;
LA7: ;
LOC9 = ((*A_18449).Sup.len == (*B_18450).Sup.len);
if (!(LOC9)) goto LA10;
LOC11 = memcmp(((NCSTRING) ((*A_18449).data)), ((NCSTRING) ((*B_18450).data)), ((NI32) ((NI64)((*A_18449).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18451 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18451;
}
N_NIMCALL(NIM_BOOL, Exprstructuralequivalent_93035)(TY51526* A_93037, TY51526* B_93038) {
NIM_BOOL Result_93161;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NI LOC11;
NI LOC12;
NI I_93338;
NI HEX3Atmp_93363;
NI LOC15;
NI Res_93365;
NIM_BOOL LOC18;
Result_93161 = 0;
Result_93161 = NIM_FALSE;
if (!(A_93037 == B_93038)) goto LA2;
Result_93161 = NIM_TRUE;
goto LA1;
LA2: ;
LOC5 = !((A_93037 == NIM_NIL));
if (!(LOC5)) goto LA6;
LOC5 = !((B_93038 == NIM_NIL));
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = ((*A_93037).Kind == (*B_93038).Kind);
LA7: ;
if (!LOC4) goto LA8;
switch ((*A_93037).Kind) {
case ((NU8) 3):
Result_93161 = ((*(*(*A_93037).KindU.S4.Sym).Name).Sup.Id == (*(*(*B_93038).KindU.S4.Sym).Name).Sup.Id);
break;
case ((NU8) 2):
Result_93161 = ((*(*A_93037).KindU.S5.Ident).Sup.Id == (*(*B_93038).KindU.S5.Ident).Sup.Id);
break;
case ((NU8) 5) ... ((NU8) 10):
Result_93161 = ((*A_93037).KindU.S1.Intval == (*B_93038).KindU.S1.Intval);
break;
case ((NU8) 11) ... ((NU8) 13):
Result_93161 = (((NF) ((*A_93037).KindU.S2.Floatval)) == ((NF) ((*B_93038).KindU.S2.Floatval)));
break;
case ((NU8) 14) ... ((NU8) 16):
Result_93161 = eqStrings((*A_93037).KindU.S3.Strval, (*B_93038).KindU.S3.Strval);
break;
case ((NU8) 1):
case ((NU8) 18):
case ((NU8) 4):
Result_93161 = NIM_TRUE;
break;
default:
LOC11 = Sonslen_51804(A_93037);
LOC12 = Sonslen_51804(B_93038);
if (!(LOC11 == LOC12)) goto LA13;
I_93338 = 0;
HEX3Atmp_93363 = 0;
LOC15 = Sonslen_51804(A_93037);
HEX3Atmp_93363 = (NI64)(LOC15 - 1);
Res_93365 = 0;
Res_93365 = 0;
while (1) {
if (!(Res_93365 <= HEX3Atmp_93363)) goto LA16;
I_93338 = Res_93365;
LOC18 = Exprstructuralequivalent_93035((*A_93037).KindU.S6.Sons->data[I_93338], (*B_93038).KindU.S6.Sons->data[I_93338]);
if (!!(LOC18)) goto LA19;
goto BeforeRet;
LA19: ;
Res_93365 += 1;
} LA16: ;
Result_93161 = NIM_TRUE;
LA13: ;
break;
}
goto LA1;
LA8: ;
LA1: ;
BeforeRet: ;
return Result_93161;
}
N_NIMCALL(NIM_BOOL, Isconstexpr_93016)(TY51526* N_93018) {
NIM_BOOL Result_93738;
NIM_BOOL LOC1;
Result_93738 = 0;
LOC1 = ((*N_93018).Kind >= ((NU8) 5) && (*N_93018).Kind <= ((NU8) 10) || (*N_93018).Kind >= ((NU8) 14) && (*N_93018).Kind <= ((NU8) 16) || (*N_93018).Kind >= ((NU8) 11) && (*N_93018).Kind <= ((NU8) 13) || (*N_93018).Kind == ((NU8) 18));
if (LOC1) goto LA2;
LOC1 = (((*N_93018).Flags &(1<<((((NU8) 4))&7)))!=0);
LA2: ;
Result_93738 = LOC1;
return Result_93738;
}
N_NOINLINE(void, treesInit)(void) {
}

