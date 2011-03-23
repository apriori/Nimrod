/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long long int NI;
typedef unsigned long long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY28434 TY28434;
typedef struct TY28436 TY28436;
typedef struct TY28432 TY28432;
typedef struct TY64699 TY64699;
typedef struct TY64202 TY64202;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY35021 TY35021;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY62408 TY62408;
typedef struct TNimObject TNimObject;
typedef struct TY41006 TY41006;
typedef struct TY41004 TY41004;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY28434 {
NI32 Cb;
NCSTRING Lpreserved;
NCSTRING Lpdesktop;
NCSTRING Lptitle;
NI32 Dwx;
NI32 Dwy;
NI32 Dwxsize;
NI32 Dwysize;
NI32 Dwxcountchars;
NI32 Dwycountchars;
NI32 Dwfillattribute;
NI32 Dwflags;
NI16 Wshowwindow;
NI16 Cbreserved2;
void* Lpreserved2;
NI Hstdinput;
NI Hstdoutput;
NI Hstderror;
};
struct TY28436 {
NI Hprocess;
NI Hthread;
NI32 Dwprocessid;
NI32 Dwthreadid;
};
typedef N_STDCALL_PTR(NI, TY28538) (NI32 Nstdhandle_28539);
typedef N_STDCALL_PTR(NI32, TY28503) (NCSTRING Lpapplicationname_28504, NCSTRING Lpcommandline_28505, TY28432* Lpprocessattributes_28507, TY28432* Lpthreadattributes_28509, NI32 Binherithandles_28510, NI32 Dwcreationflags_28511, void* Lpenvironment_28512, NCSTRING Lpcurrentdirectory_28513, TY28434* Lpstartupinfo_28515, TY28436* Lpprocessinformation_28517);
typedef N_STDCALL_PTR(NI32, TY28476) (NI Hobject_28477);
typedef N_STDCALL_PTR(NI32, TY28525) (NI Hhandle_28526, NI32 Dwmilliseconds_28527);
typedef N_STDCALL_PTR(NI32, TY28533) (NI Hprocess_28534, NI32* Lpexitcode_28536);
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
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10994 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10996 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY10994 Stat;
};
struct TNimObject {
TNimType* m_type;
};
struct TY64202 {
  TNimObject Sup;
NI Fprocesshandle;
NI32 Inputhandle;
NI32 Outputhandle;
NI32 Errorhandle;
NI32 Id;
NI32 Exitcode;
};
struct TY28432 {
NI32 Nlength;
void* Lpsecuritydescriptor;
NI32 Binherithandle;
};
typedef N_STDCALL_PTR(NI32, TY28495) (NI* Hreadpipe_28497, NI* Hwritepipe_28498, TY28432* Lppipeattributes_28500, NI32 Nsize_28501);
struct TY41004 {
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TY62408 {
  TNimObject Sup;
NI Counter;
TY41006* Data;
NU8 Mode;
};
typedef NI TY8614[8];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY64699 {
  TGenericSeq Sup;
  TY64202* data[SEQ_DECL_SIZE];
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY41006 {
  TGenericSeq Sup;
  TY41004 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, Getenv_35218)(NimStringDesc* Key_35220);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* S_25452);
N_NOINLINE(void, nosOSError)(NimStringDesc* Msg_32004);
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
N_NIMCALL(TY64202*, Startprocessaux_64603)(NimStringDesc* Cmd_64605, NU8 Options_64607);
N_NIMCALL(TY35021*, nosparseCmdLine)(NimStringDesc* C_36232);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* Seq_18642, NI Elemsize_18643);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(TY64202*, nospstartProcess)(NimStringDesc* Command_64239, NimStringDesc* Workingdir_64240, NimStringDesc** Args_64245, NI Args_64245Len0, TY62408* Env_64246, NU8 Options_64249);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(void, Createpipehandles_65323)(NI* Rdhandle_65326, NI* Wrhandle_65327);
N_NIMCALL(NCSTRING, Buildcommandline_65260)(NimStringDesc* A_65262, NimStringDesc** Args_65264, NI Args_65264Len0);
N_NIMCALL(NimStringDesc*, Quoteifcontainswhite_26268)(NimStringDesc* S_26270);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18589, NI Addlen_18590);
N_NOCONV(void*, Alloc0_2353)(NI Size_2355);
N_NIMCALL(NCSTRING, Buildenv_65280)(TY62408* Env_65282);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING Str_18508);
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502);
N_NIMCALL(void, Write_3866)(FILE* F_3868, NimStringDesc* S_3869);
static N_INLINE(void, rawEchoNL)(void);
static N_INLINE(void, Fileclose_65332)(NI H_65334);
N_NOCONV(void, Dealloc_2360)(void* P_2362);
N_NIMCALL(void, nossleep)(NI Milsecs_38012);
N_NIMCALL(NIM_BOOL, nosprunning)(TY64202* P_64261);
N_NIMCALL(NI, nospwaitForExit)(TY64202* P_64268);
STRING_LITERAL(TMP194912, "NUMBER_OF_PROCESSORS", 20);
STRING_LITERAL(TMP194913, "", 0);
STRING_LITERAL(TMP194915, "=", 1);
STRING_LITERAL(TMP194916, "\015\012", 2);
extern TY28538 Dl_28537;
extern TY28503 Dl_28502;
extern TY28476 Dl_28475;
extern TY28525 Dl_28524;
extern TY28533 Dl_28532;
extern TNimType* NTI64699; /* seq[PProcess] */
extern TNimType* NTI35021; /* seq[string] */
extern TY10996 Gch_11014;
extern TNimType* NTI64204; /* PProcess */
extern TNimType* NTI64202; /* TProcess */
extern TY28495 Dl_28494;
N_NIMCALL(NI, nospcountProcessors)(void) {
NI Result_64403;
NimStringDesc* X_64404;
X_64404 = 0;
Result_64403 = 0;
X_64404 = NIM_NIL;
X_64404 = Getenv_35218(((NimStringDesc*) &TMP194912));
if (!(0 < X_64404->Sup.len)) goto LA2;
Result_64403 = nsuParseInt(X_64404);
LA2: ;
if (!(Result_64403 <= 0)) goto LA5;
Result_64403 = 1;
LA5: ;
return Result_64403;
}
N_NIMCALL(NI, nospexecCmd)(NimStringDesc* Command_64232) {
NI Result_65694;
TY28434 Si_65695;
TY28436 Procinfo_65696;
NI Process_65697;
NI32 L_65698;
NI32 LOC2;
NI32 LOC5;
NI32 LOC7;
NI32 LOC10;
NI32 LOC11;
Result_65694 = 0;
memset((void*)&Si_65695, 0, sizeof(Si_65695));
memset((void*)&Procinfo_65696, 0, sizeof(Procinfo_65696));
Process_65697 = 0;
L_65698 = 0;
Si_65695.Cb = ((NI32) (((NI)sizeof(TY28434))));
Si_65695.Hstderror = Dl_28537(((NI32) -12));
Si_65695.Hstdinput = Dl_28537(((NI32) -10));
Si_65695.Hstdoutput = Dl_28537(((NI32) -11));
LOC2 = Dl_28502(NIM_NIL, Command_64232->data, NIM_NIL, NIM_NIL, ((NI32) 0), ((NI32) 32), NIM_NIL, NIM_NIL, &Si_65695, &Procinfo_65696);
if (!(((NI) (LOC2)) == 0)) goto LA3;
nosOSError(((NimStringDesc*) &TMP194913));
goto LA1;
LA3: ;
Process_65697 = Procinfo_65696.Hprocess;
LOC5 = Dl_28475(Procinfo_65696.Hthread);
LOC7 = Dl_28524(Process_65697, ((NI32) -1));
if (!!((((NI) (LOC7)) == -1))) goto LA8;
LOC10 = Dl_28532(Process_65697, &L_65698);
Result_65694 = ((NI) (L_65698));
goto LA6;
LA8: ;
Result_65694 = -1;
LA6: ;
LOC11 = Dl_28475(Process_65697);
LA1: ;
return Result_65694;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI64)((NU64)(((NI) (Usr_11414))) - (NU64)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11014.Zct, C_12403);
}
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019) {
TY10602* C_13020;
NI LOC4;
TY10602* C_13022;
NI LOC9;
if (!!((Src_13019 == NIM_NIL))) goto LA2;
C_13020 = 0;
C_13020 = Usrtocell_11412(Src_13019);
LOC4 = Atomicinc_3221(&(*C_13020).Refcount, 8);
LA2: ;
if (!!(((*Dest_13018) == NIM_NIL))) goto LA6;
C_13022 = 0;
C_13022 = Usrtocell_11412((*Dest_13018));
LOC9 = Atomicdec_3226(&(*C_13022).Refcount, 8);
if (!((NU64)(LOC9) < (NU64)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
N_NIMCALL(void, Createpipehandles_65323)(NI* Rdhandle_65326, NI* Wrhandle_65327) {
TY28432 Piinheritablepipe_65328;
NI32 LOC2;
memset((void*)&Piinheritablepipe_65328, 0, sizeof(Piinheritablepipe_65328));
Piinheritablepipe_65328.Nlength = ((NI32) (((NI)sizeof(TY28432))));
Piinheritablepipe_65328.Lpsecuritydescriptor = NIM_NIL;
Piinheritablepipe_65328.Binherithandle = ((NI32) 1);
LOC2 = Dl_28494(Rdhandle_65326, Wrhandle_65327, &Piinheritablepipe_65328, ((NI32) 1024));
if (!(LOC2 == ((NI32) 0))) goto LA3;
nosOSError(((NimStringDesc*) &TMP194913));
LA3: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI64)((NI64)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
N_NIMCALL(NCSTRING, Buildcommandline_65260)(NimStringDesc* A_65262, NimStringDesc** Args_65264, NI Args_65264Len0) {
NCSTRING Result_65265;
NimStringDesc* Res_65266;
NI I_65275;
NI HEX3Atmp_65801;
NI Res_65803;
NimStringDesc* LOC2;
void* LOC3;
Res_65266 = 0;
Result_65265 = 0;
Res_65266 = NIM_NIL;
Res_65266 = Quoteifcontainswhite_26268(A_65262);
I_65275 = 0;
HEX3Atmp_65801 = 0;
HEX3Atmp_65801 = (Args_65264Len0-1);
Res_65803 = 0;
Res_65803 = 0;
while (1) {
if (!(Res_65803 <= HEX3Atmp_65801)) goto LA1;
I_65275 = Res_65803;
Res_65266 = addChar(Res_65266, 32);
LOC2 = 0;
LOC2 = Quoteifcontainswhite_26268(Args_65264[I_65275]);
Res_65266 = resizeString(Res_65266, LOC2->Sup.len + 0);
appendString(Res_65266, LOC2);
Res_65803 += 1;
} LA1: ;
LOC3 = Alloc0_2353((NI64)(Res_65266->Sup.len + 1));
Result_65265 = ((NCSTRING) (LOC3));
memcpy(((void*) (Result_65265)), ((void*) (Res_65266->data)), Res_65266->Sup.len);
return Result_65265;
}
N_NIMCALL(NCSTRING, Buildenv_65280)(TY62408* Env_65282) {
NCSTRING Result_65283;
NI L_65284;
NimStringDesc* Key_65285;
NimStringDesc* Val_65286;
NI H_65805;
NI HEX3Atmp_65807;
NI Res_65809;
void* LOC5;
NimStringDesc* Key_65303;
NimStringDesc* Val_65304;
NI H_65811;
NI HEX3Atmp_65813;
NI Res_65815;
NimStringDesc* X_65305;
NimStringDesc* LOC10;
Key_65285 = 0;
Val_65286 = 0;
Key_65303 = 0;
Val_65304 = 0;
X_65305 = 0;
Result_65283 = 0;
L_65284 = 0;
L_65284 = 0;
Key_65285 = NIM_NIL;
Val_65286 = NIM_NIL;
H_65805 = 0;
HEX3Atmp_65807 = 0;
HEX3Atmp_65807 = ((*Env_65282).Data->Sup.len-1);
Res_65809 = 0;
Res_65809 = 0;
while (1) {
if (!(Res_65809 <= HEX3Atmp_65807)) goto LA1;
H_65805 = Res_65809;
if (!!((*Env_65282).Data->data[H_65805].Key == 0)) goto LA3;
Key_65285 = (*Env_65282).Data->data[H_65805].Key;
Val_65286 = (*Env_65282).Data->data[H_65805].Val;
L_65284 += (NI64)((NI64)(Key_65285->Sup.len + Val_65286->Sup.len) + 2);
LA3: ;
Res_65809 += 1;
} LA1: ;
LOC5 = Alloc0_2353((NI64)(L_65284 + 2));
Result_65283 = ((NCSTRING) (LOC5));
L_65284 = 0;
Key_65303 = NIM_NIL;
Val_65304 = NIM_NIL;
H_65811 = 0;
HEX3Atmp_65813 = 0;
HEX3Atmp_65813 = ((*Env_65282).Data->Sup.len-1);
Res_65815 = 0;
Res_65815 = 0;
while (1) {
if (!(Res_65815 <= HEX3Atmp_65813)) goto LA6;
H_65811 = Res_65815;
if (!!((*Env_65282).Data->data[H_65811].Key == 0)) goto LA8;
Key_65303 = (*Env_65282).Data->data[H_65811].Key;
Val_65304 = (*Env_65282).Data->data[H_65811].Val;
X_65305 = NIM_NIL;
LOC10 = 0;
LOC10 = rawNewString(Key_65303->Sup.len + Val_65304->Sup.len + 1);
appendString(LOC10, Key_65303);
appendString(LOC10, ((NimStringDesc*) &TMP194915));
appendString(LOC10, Val_65304);
X_65305 = LOC10;
memcpy(((void*) (&Result_65283[L_65284])), ((void*) (X_65305->data)), (NI64)(X_65305->Sup.len + 1));
L_65284 += (NI64)(X_65305->Sup.len + 1);
LA8: ;
Res_65815 += 1;
} LA6: ;
return Result_65283;
}
static N_INLINE(void, rawEcho)(NimStringDesc* X_4502) {
Write_3866(stdout, X_4502);
}
static N_INLINE(void, rawEchoNL)(void) {
Write_3866(stdout, ((NimStringDesc*) &TMP194916));
}
static N_INLINE(void, Fileclose_65332)(NI H_65334) {
NI32 LOC4;
if (!(4 < H_65334)) goto LA2;
LOC4 = Dl_28475(H_65334);
LA2: ;
}
N_NIMCALL(TY64202*, nospstartProcess)(NimStringDesc* Command_64239, NimStringDesc* Workingdir_64240, NimStringDesc** Args_64245, NI Args_64245Len0, TY62408* Env_64246, NU8 Options_64249) {
TY64202* Result_65352;
TY28434 Si_65353;
TY28436 Procinfo_65354;
NI Success_65355;
NI Hi_65356;
NI Ho_65357;
NI He_65358;
NCSTRING Cmdl_65402;
NCSTRING Wd_65601;
NCSTRING E_65602;
NimStringDesc* LOC16;
NI32 LOC17;
NI32 LOC30;
Result_65352 = 0;
Result_65352 = NIM_NIL;
memset((void*)&Si_65353, 0, sizeof(Si_65353));
memset((void*)&Procinfo_65354, 0, sizeof(Procinfo_65354));
Success_65355 = 0;
Hi_65356 = 0;
Ho_65357 = 0;
He_65358 = 0;
Result_65352 = (TY64202*) newObj(NTI64204, sizeof(TY64202));
(*Result_65352).Sup.m_type = NTI64202;
Si_65353.Cb = ((NI32) (((NI)sizeof(TY28434))));
if (!!(((Options_64249 &(1<<((((NU8) 3))&7)))!=0))) goto LA2;
Si_65353.Dwflags = ((NI32) 256);
Createpipehandles_65323(&Si_65353.Hstdinput, &Hi_65356);
Createpipehandles_65323(&Ho_65357, &Si_65353.Hstdoutput);
if (!((Options_64249 &(1<<((((NU8) 2))&7)))!=0)) goto LA5;
Si_65353.Hstderror = Si_65353.Hstdoutput;
He_65358 = Ho_65357;
goto LA4;
LA5: ;
Createpipehandles_65323(&He_65358, &Si_65353.Hstderror);
LA4: ;
(*Result_65352).Inputhandle = ((NI32) (Hi_65356));
(*Result_65352).Outputhandle = ((NI32) (Ho_65357));
(*Result_65352).Errorhandle = ((NI32) (He_65358));
goto LA1;
LA2: ;
Si_65353.Hstderror = Dl_28537(((NI32) -12));
Si_65353.Hstdinput = Dl_28537(((NI32) -10));
Si_65353.Hstdoutput = Dl_28537(((NI32) -11));
(*Result_65352).Inputhandle = ((NI32) (Si_65353.Hstdinput));
(*Result_65352).Outputhandle = ((NI32) (Si_65353.Hstdoutput));
(*Result_65352).Errorhandle = ((NI32) (Si_65353.Hstderror));
LA1: ;
Cmdl_65402 = 0;
Cmdl_65402 = Buildcommandline_65260(Command_64239, Args_64245, Args_64245Len0);
Wd_65601 = 0;
Wd_65601 = NIM_NIL;
E_65602 = 0;
E_65602 = NIM_NIL;
if (!(0 < Workingdir_64240->Sup.len)) goto LA8;
Wd_65601 = Workingdir_64240->data;
LA8: ;
if (!!((Env_64246 == NIM_NIL))) goto LA11;
E_65602 = Buildenv_65280(Env_64246);
LA11: ;
if (!((Options_64249 &(1<<((((NU8) 0))&7)))!=0)) goto LA14;
LOC16 = 0;
LOC16 = cstrToNimstr(Cmdl_65402);
rawEcho(LOC16);
rawEchoNL();
LA14: ;
LOC17 = Dl_28502(NIM_NIL, Cmdl_65402, NIM_NIL, NIM_NIL, ((NI32) 1), ((NI32) 32), ((void*) (E_65602)), Wd_65601, &Si_65353, &Procinfo_65354);
Success_65355 = ((NI) (LOC17));
if (!!(((Options_64249 &(1<<((((NU8) 3))&7)))!=0))) goto LA19;
Fileclose_65332(Si_65353.Hstdinput);
Fileclose_65332(Si_65353.Hstdoutput);
if (!!(((Options_64249 &(1<<((((NU8) 2))&7)))!=0))) goto LA22;
Fileclose_65332(Si_65353.Hstderror);
LA22: ;
LA19: ;
if (!!((E_65602 == NIM_NIL))) goto LA25;
Dealloc_2360(((void*) (E_65602)));
LA25: ;
Dealloc_2360(((void*) (Cmdl_65402)));
if (!(Success_65355 == 0)) goto LA28;
nosOSError(((NimStringDesc*) &TMP194913));
LA28: ;
LOC30 = Dl_28475(Procinfo_65354.Hthread);
(*Result_65352).Fprocesshandle = Procinfo_65354.Hprocess;
(*Result_65352).Id = Procinfo_65354.Dwprocessid;
return Result_65352;
}
N_NIMCALL(TY64202*, Startprocessaux_64603)(NimStringDesc* Cmd_64605, NU8 Options_64607) {
TY64202* Result_64608;
TY35021* C_64609;
TY35021* A_64627;
NI I_64661;
NI HEX3Atmp_64680;
NI Res_64682;
Result_64608 = 0;
C_64609 = 0;
A_64627 = 0;
Result_64608 = NIM_NIL;
C_64609 = NIM_NIL;
C_64609 = nosparseCmdLine(Cmd_64605);
A_64627 = NIM_NIL;
A_64627 = (TY35021*) newSeq(NTI35021, 0);
I_64661 = 0;
HEX3Atmp_64680 = 0;
HEX3Atmp_64680 = (NI64)(C_64609->Sup.len - 1);
Res_64682 = 0;
Res_64682 = 1;
while (1) {
if (!(Res_64682 <= HEX3Atmp_64680)) goto LA1;
I_64661 = Res_64682;
A_64627 = (TY35021*) incrSeq(&(A_64627)->Sup, sizeof(NimStringDesc*));
asgnRefNoCycle((void**) &A_64627->data[A_64627->Sup.len-1], copyString(C_64609->data[I_64661]));
Res_64682 += 1;
} LA1: ;
Result_64608 = nospstartProcess(C_64609->data[0], ((NimStringDesc*) &TMP194913), A_64627->data, A_64627->Sup.len, NIM_NIL, Options_64607);
return Result_64608;
}
N_NIMCALL(NIM_BOOL, nosprunning)(TY64202* P_64261) {
NIM_BOOL Result_65666;
NI32 X_65667;
Result_65666 = 0;
X_65667 = 0;
X_65667 = Dl_28524((*P_64261).Fprocesshandle, ((NI32) 50));
Result_65666 = (X_65667 == ((NI32) 258));
goto BeforeRet;
BeforeRet: ;
return Result_65666;
}
N_NIMCALL(NI, nospwaitForExit)(TY64202* P_64268) {
NI Result_65676;
NI32 LOC1;
NI32 Res_65677;
NI32 LOC2;
NI32 LOC3;
Result_65676 = 0;
LOC1 = Dl_28524((*P_64268).Fprocesshandle, ((NI32) -1));
Res_65677 = 0;
LOC2 = Dl_28532((*P_64268).Fprocesshandle, &Res_65677);
Result_65676 = ((NI) (Res_65677));
LOC3 = Dl_28475((*P_64268).Fprocesshandle);
return Result_65676;
}
N_NIMCALL(NI, nospexecProcesses)(NimStringDesc** Cmds_64686, NI Cmds_64686Len0, NU8 Options_64688, NI N_64689) {
NI Result_64690;
TY64699* Q_64700;
NI M_64725;
NI I_64734;
NI HEX3Atmp_64824;
NI Res_64826;
NI I_64735;
NI R_64746;
NI HEX3Atmp_64827;
NI Res_64829;
NIM_BOOL LOC8;
NI LOC11;
NI I_64809;
NI HEX3Atmp_64830;
NI Res_64832;
NI LOC16;
NI I_64820;
NI HEX3Atmp_64833;
NI Res_64835;
TY64202* P_64821;
NI LOC18;
Q_64700 = 0;
P_64821 = 0;
Result_64690 = 0;
if (!(1 < N_64689)) goto LA2;
Q_64700 = NIM_NIL;
Q_64700 = (TY64699*) newSeq(NTI64699, N_64689);
M_64725 = 0;
M_64725 = ((N_64689 <= Cmds_64686Len0) ? N_64689 : Cmds_64686Len0);
I_64734 = 0;
HEX3Atmp_64824 = 0;
HEX3Atmp_64824 = (NI64)(M_64725 - 1);
Res_64826 = 0;
Res_64826 = 0;
while (1) {
if (!(Res_64826 <= HEX3Atmp_64824)) goto LA4;
I_64734 = Res_64826;
asgnRefNoCycle((void**) &Q_64700->data[I_64734], Startprocessaux_64603(Cmds_64686[I_64734], Options_64688));
Res_64826 += 1;
} LA4: ;
I_64735 = 0;
I_64735 = M_64725;
while (1) {
if (!(I_64735 <= (Cmds_64686Len0-1))) goto LA5;
nossleep(50);
R_64746 = 0;
HEX3Atmp_64827 = 0;
HEX3Atmp_64827 = (NI64)(N_64689 - 1);
Res_64829 = 0;
Res_64829 = 0;
while (1) {
if (!(Res_64829 <= HEX3Atmp_64827)) goto LA6;
R_64746 = Res_64829;
LOC8 = nosprunning(Q_64700->data[R_64746]);
if (!!(LOC8)) goto LA9;
LOC11 = nospwaitForExit(Q_64700->data[R_64746]);
Result_64690 = ((LOC11 >= Result_64690) ? LOC11 : Result_64690);
asgnRefNoCycle((void**) &Q_64700->data[R_64746], Startprocessaux_64603(Cmds_64686[I_64735], Options_64688));
I_64735 += 1;
if (!((Cmds_64686Len0-1) < I_64735)) goto LA13;
goto LA6;
LA13: ;
LA9: ;
Res_64829 += 1;
} LA6: ;
} LA5: ;
I_64809 = 0;
HEX3Atmp_64830 = 0;
HEX3Atmp_64830 = (NI64)(M_64725 - 1);
Res_64832 = 0;
Res_64832 = 0;
while (1) {
if (!(Res_64832 <= HEX3Atmp_64830)) goto LA15;
I_64809 = Res_64832;
LOC16 = nospwaitForExit(Q_64700->data[I_64809]);
Result_64690 = ((LOC16 >= Result_64690) ? LOC16 : Result_64690);
Res_64832 += 1;
} LA15: ;
goto LA1;
LA2: ;
I_64820 = 0;
HEX3Atmp_64833 = 0;
HEX3Atmp_64833 = (Cmds_64686Len0-1);
Res_64835 = 0;
Res_64835 = 0;
while (1) {
if (!(Res_64835 <= HEX3Atmp_64833)) goto LA17;
I_64820 = Res_64835;
P_64821 = NIM_NIL;
P_64821 = Startprocessaux_64603(Cmds_64686[I_64820], Options_64688);
LOC18 = nospwaitForExit(P_64821);
Result_64690 = ((LOC18 >= Result_64690) ? LOC18 : Result_64690);
Res_64835 += 1;
} LA17: ;
LA1: ;
return Result_64690;
}
N_NOINLINE(void, osprocInit)(void) {
}

