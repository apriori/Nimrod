/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
typedef NIM_CHAR TY55015[81];
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18508);
STRING_LITERAL(TMP194508, "NAN", 3);
STRING_LITERAL(TMP194509, "0.0", 3);
STRING_LITERAL(TMP194510, "INF", 3);
STRING_LITERAL(TMP194511, "-INF", 4);
N_NIMCALL(NimStringDesc*, Tostrmaxprecision_55011)(NF64 F_55013) {
NimStringDesc* Result_55014;
TY55015 Buf_55017;
Result_55014 = 0;
Result_55014 = NIM_NIL;
if (!!((((NF) (F_55013)) == ((NF) (F_55013))))) goto LA2;
Result_55014 = copyString(((NimStringDesc*) &TMP194508));
goto LA1;
LA2: ;
if (!(((NF) (F_55013)) == 0.0)) goto LA4;
Result_55014 = copyString(((NimStringDesc*) &TMP194509));
goto LA1;
LA4: ;
if (!(((NF) (F_55013)) == (5.0000000000000000e-01 * ((NF) (F_55013))))) goto LA6;
if (!(0.0 < ((NF) (F_55013)))) goto LA9;
Result_55014 = copyString(((NimStringDesc*) &TMP194510));
goto LA8;
LA9: ;
Result_55014 = copyString(((NimStringDesc*) &TMP194511));
LA8: ;
goto LA1;
LA6: ;
memset((void*)&Buf_55017, 0, sizeof(Buf_55017));
sprintf(((NCSTRING) (Buf_55017)), "%#.16e", F_55013);
Result_55014 = cstrToNimstr(((NCSTRING) (Buf_55017)));
LA1: ;
return Result_55014;
}
N_NOINLINE(void, rodutilsInit)(void) {
}

