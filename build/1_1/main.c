/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY189208 TY189208;
typedef struct TY189206 TY189206;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51548 TY51548;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY10602 TY10602;
typedef struct TY10618 TY10618;
typedef struct TY10996 TY10996;
typedef struct TY10614 TY10614;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY39019 TY39019;
typedef struct TY39013 TY39013;
typedef struct TY34461 TY34461;
typedef struct TY51526 TY51526;
typedef struct TY90031 TY90031;
typedef struct TY50005 TY50005;
typedef struct TNimObject TNimObject;
typedef struct TY51552 TY51552;
typedef struct TY50011 TY50011;
typedef struct TY43538 TY43538;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY72204 TY72204;
typedef struct TY102006 TY102006;
typedef struct TY102002 TY102002;
typedef struct TY39015 TY39015;
typedef struct TY74267 TY74267;
typedef struct TY73015 TY73015;
typedef struct TY74281 TY74281;
typedef struct TY74263 TY74263;
typedef struct TY51520 TY51520;
typedef struct TY35021 TY35021;
typedef struct TY90029 TY90029;
typedef struct TY56215 TY56215;
typedef struct TY56213 TY56213;
typedef struct TY56211 TY56211;
typedef struct TY51564 TY51564;
typedef struct TY51562 TY51562;
typedef struct TY51560 TY51560;
typedef struct TY51550 TY51550;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY189206 {
NimStringDesc* Filename;
TY51548* Module;
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
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
struct TY34461 {
NimStringDesc* Dir;
NimStringDesc* Name;
NimStringDesc* Ext;
};
typedef N_NIMCALL_PTR(TY51526*, TY102045) (NimStringDesc* Filename_102046);
typedef N_NIMCALL_PTR(TY51548*, TY102041) (NimStringDesc* Filename_102042);
struct TNimObject {
TNimType* m_type;
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
typedef N_NIMCALL_PTR(TY102002*, TY102007) (TY51548* Module_102008, NimStringDesc* Filename_102009);
typedef N_NIMCALL_PTR(TY102002*, TY102012) (TY51548* Module_102013, NimStringDesc* Filename_102014, TY90031* Rd_102015);
typedef N_NIMCALL_PTR(TY51526*, TY102018) (TY102002* P_102019, TY51526* N_102020);
typedef N_NIMCALL_PTR(TY51526*, TY102023) (TY102002* P_102024, TY51526* Toplevelstmt_102025);
struct TY102006 {
TY102007 Open;
TY102012 Opencached;
TY102018 Close;
TY102023 Process;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY39015 {
  TY39013 Sup;
NimStringDesc* Data;
};
struct TY73015 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
TY72204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct TY74267 {
  TY73015 Sup;
NimStringDesc* Filename;
TY74281* Indentstack;
NI Dedent;
NI Indentahead;
};
struct TY74263 {
TNimType* m_type;
NU8 Toktype;
NI Indent;
TY50011* Ident;
NI64 Inumber;
NF64 Fnumber;
NU8 Base;
NimStringDesc* Literal;
TY74263* Next;
};
typedef NI TY8614[16];
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
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
struct TY56211 {
NI Key;
NI Val;
};
struct TY56215 {
NI Counter;
TY56213* Data;
};
struct TY90029 {
NI Lastidxkey;
NI Lastidxval;
TY56215 Tab;
TY48008* R;
NI Offset;
};
struct TY51560 {
TY50005* Key;
TNimObject* Val;
};
struct TY51564 {
NI Counter;
TY51562* Data;
};
struct TY90031 {
  TNimObject Sup;
NI Pos;
NimStringDesc* S;
NU32 Options;
NU8 Reason;
TY35021* Moddeps;
TY35021* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Cgenidx;
NimStringDesc* Filename;
TY90029 Index;
TY90029 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
TY51564 Syms;
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
struct TY72204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY189208 {
  TGenericSeq Sup;
  TY189206 data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY74281 {
  TGenericSeq Sup;
  NI data[SEQ_DECL_SIZE];
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY35021 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY56213 {
  TGenericSeq Sup;
  TY56211 data[SEQ_DECL_SIZE];
};
struct TY51562 {
  TGenericSeq Sup;
  TY51560 data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void*, newSeq)(TNimType* Typ_14204, NI Len_14205);
static N_INLINE(void, asgnRefNoCycle)(void** Dest_13018, void* Src_13019);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, Appendstr_39061)(TY39019* List_39064, NimStringDesc* Data_39065);
N_NIMCALL(void, Prependstr_39071)(TY39019* List_39074, NimStringDesc* Data_39075);
N_NIMCALL(void, nossplitFile)(NimStringDesc* Path_34460, TY34461* Result);
static N_INLINE(void, Setid_51696)(NI Id_51698);
N_NIMCALL(TY51526*, Parsefile_89031)(NimStringDesc* Filename_89033);
N_NIMCALL(TY51548*, Importmodule_189325)(NimStringDesc* Filename_189327);
N_NIMCALL(TY51548*, Getmodule_189256)(NimStringDesc* Filename_189258);
N_NIMCALL(NIM_BOOL, nossameFile)(NimStringDesc* Path1_34650, NimStringDesc* Path2_34651);
N_NIMCALL(TY51548*, Compilemodule_189320)(NimStringDesc* Filename_189322, NIM_BOOL Ismainfile_189323, NIM_BOOL Issystemfile_189324);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* Filename_34630, NimStringDesc* Ext_34631);
N_NIMCALL(TY51548*, Newmodule_189287)(NimStringDesc* Filename_189289);
N_NIMCALL(void*, newObj)(TNimType* Typ_13710, NI Size_13711);
N_NIMCALL(void, objectInit)(void* Dest_19481, TNimType* Typ_19482);
N_NIMCALL(TY50011*, Getident_50016)(NimStringDesc* Identifier_50018);
N_NIMCALL(NIM_BOOL, Isnimrodidentifier_74357)(NimStringDesc* S_74359);
N_NIMCALL(void, Rawmessage_44094)(NU8 Msg_44096, NimStringDesc* Arg_44097);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10880)(TY10614* S_10883, TY10602* Cell_10884);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
N_NIMCALL(TY43538, Newlineinfo_43718)(NimStringDesc* Filename_43720, NI Line_43721, NI Col_43722);
N_NIMCALL(void, Initstrtable_51747)(TY51530* X_51750);
N_NIMCALL(void, Registermodule_189229)(NimStringDesc* Filename_189231, TY51548* Module_189232);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* Seq_18803, NI Elemsize_18804, NI Newlen_18805);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(void, Strtableadd_56061)(TY51530* T_56064, TY51548* N_56065);
N_NIMCALL(TY90031*, Handlesymbolfile_90060)(TY51548* Module_90062, NimStringDesc* Filename_90063);
N_NIMCALL(void, Internalerror_44212)(NimStringDesc* Errmsg_44214);
static N_INLINE(NI, Getid_51694)(void);
N_NIMCALL(void, Processmodule_102035)(TY51548* Module_102037, NimStringDesc* Filename_102038, TY72204* Stream_102039, TY90031* Rd_102040);
N_NIMCALL(void, Localerror_44193)(TY43538 Info_44195, NU8 Msg_44196, NimStringDesc* Arg_44197);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* S_24540);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* A_18449, NimStringDesc* B_18450);
N_NIMCALL(NI, hashString)(NimStringDesc* S_18527);
N_NIMCALL(void, Wantfile_189707)(NimStringDesc* Filename_189709);
N_NIMCALL(void, Fatal_44183)(TY43538 Info_44185, NU8 Msg_44186, NimStringDesc* Arg_44187);
N_NIMCALL(void, Commandcompiletoc_189416)(NimStringDesc* Filename_189418);
N_NIMCALL(void, Semanticpasses_189408)(void);
N_NIMCALL(void, Registerpass_102028)(TY102006* P_102030);
N_NIMCALL(TY102006, Verbosepass_184045)(void);
N_NIMCALL(TY102006, Sempass_128001)(void);
N_NIMCALL(TY102006, Transfpass_186005)(void);
N_NIMCALL(TY102006, Cgenpass_160201)(void);
N_NIMCALL(TY102006, Rodwritepass_108001)(void);
N_NIMCALL(void, Compileproject_189405)(NimStringDesc* Filename_189407);
N_NIMCALL(NimStringDesc*, nosJoinPath)(NimStringDesc* Head_34203, NimStringDesc* Tail_34204);
N_NIMCALL(void, Callccompiler_67806)(NimStringDesc* Projectfile_67808);
N_NIMCALL(NimStringDesc*, nosChangeFileExt)(NimStringDesc* Filename_34620, NimStringDesc* Ext_34621);
N_NIMCALL(void, Commandcompiletoecmascript_189601)(NimStringDesc* Filename_189603);
N_NIMCALL(void, Settarget_47582)(NU8 O_47584, NU8 C_47585);
N_NIMCALL(void, Initdefines_60049)(void);
N_NIMCALL(TY102006, Ecmasgenpass_177004)(void);
N_NIMCALL(void, Commandpretty_189643)(NimStringDesc* Filename_189645);
N_NIMCALL(void, Rendermodule_82035)(TY51526* N_82037, NimStringDesc* Filename_82038, NU8 Renderflags_82041);
N_NIMCALL(NimStringDesc*, Getoutfile_42167)(NimStringDesc* Filename_42169, NimStringDesc* Ext_42170);
N_NIMCALL(void, Loadspecialconfig_77007)(NimStringDesc* Configfilename_77009);
N_NIMCALL(void, Commanddoc_155001)(NimStringDesc* Filename_155003);
N_NIMCALL(void, Commandrst2html_155004)(NimStringDesc* Filename_155006);
N_NIMCALL(void, Commandrst2tex_155007)(NimStringDesc* Filename_155009);
N_NIMCALL(void, Commandgendepend_189410)(NimStringDesc* Filename_189412);
N_NIMCALL(TY102006, Gendependpass_185004)(void);
N_NIMCALL(TY102006, Cleanuppass_184173)(void);
N_NIMCALL(void, Generatedot_185006)(NimStringDesc* Project_185008);
N_NIMCALL(void, Execexternalprogram_67570)(NimStringDesc* Cmd_67572);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617);
N_NIMCALL(NimStringDesc*, rawNewString)(NI Space_18489);
N_NIMCALL(void, Listsymbols_60062)(void);
N_NIMCALL(void, Msgwriteln_43794)(NimStringDesc* S_43796);
N_NIMCALL(void, Commandcheck_189413)(NimStringDesc* Filename_189415);
N_NIMCALL(void, Commandscan_189658)(NimStringDesc* Filename_189660);
N_NIMCALL(TY72204*, Llstreamopen_72224)(NimStringDesc* Filename_72226, NU8 Mode_72227);
N_NIMCALL(void, genericReset)(void* Dest_19528, TNimType* Mt_19529);
N_NIMCALL(void, Openlexer_74298)(TY74267* Lex_74301, NimStringDesc* Filename_74302, TY72204* Inputstream_74303);
N_NIMCALL(void, Rawgettok_74304)(TY74267* L_74307, TY74263* Tok_74309);
N_NIMCALL(void, Printtok_74320)(TY74263* Tok_74322);
N_NIMCALL(void, Closelexer_74316)(TY74267* Lex_74319);
N_NIMCALL(void, Commandinteractive_189616)(void);
N_NIMCALL(TY102006, Evalpass_117511)(void);
N_NIMCALL(TY72204*, Llstreamopenstdin_72230)(void);
N_NIMCALL(void, Commandsuggest_189704)(NimStringDesc* Filename_189706);
STRING_LITERAL(TMP193880, "nim", 3);
STRING_LITERAL(TMP193933, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP193935, "c", 1);
STRING_LITERAL(TMP193936, "cc", 2);
STRING_LITERAL(TMP193937, "compile", 7);
STRING_LITERAL(TMP193938, "compiletoc", 10);
STRING_LITERAL(TMP193939, "compiletocpp", 12);
STRING_LITERAL(TMP193940, "oc", 2);
STRING_LITERAL(TMP193941, "compiletooc", 11);
STRING_LITERAL(TMP193942, "run", 3);
STRING_LITERAL(TMP193943, "js", 2);
STRING_LITERAL(TMP193944, "compiletoecmascript", 19);
STRING_LITERAL(TMP193945, "compiletollvm", 13);
STRING_LITERAL(TMP193946, "pretty", 6);
STRING_LITERAL(TMP193947, "doc", 3);
STRING_LITERAL(TMP193948, "rst2html", 8);
STRING_LITERAL(TMP193949, "rst2tex", 7);
STRING_LITERAL(TMP193950, "gendepend", 9);
STRING_LITERAL(TMP193951, "dump", 4);
STRING_LITERAL(TMP193952, "check", 5);
STRING_LITERAL(TMP193953, "parse", 5);
STRING_LITERAL(TMP193954, "scan", 4);
STRING_LITERAL(TMP193955, "i", 1);
STRING_LITERAL(TMP193956, "idetools", 8);
STRING_LITERAL(TMP193957, "command line", 12);
STRING_LITERAL(TMP193958, "", 0);
STRING_LITERAL(TMP194911, "system", 6);
STRING_LITERAL(TMP194923, ".cpp", 4);
STRING_LITERAL(TMP194924, ".m", 2);
STRING_LITERAL(TMP195132, "pretty.nim", 10);
STRING_LITERAL(TMP195133, "nimdoc.cfg", 10);
STRING_LITERAL(TMP195536, "nimdoc.tex.cfg", 14);
STRING_LITERAL(TMP195544, "dot -Tpng -o", 12);
STRING_LITERAL(TMP195545, "png", 3);
STRING_LITERAL(TMP195546, "dot", 3);
STRING_LITERAL(TMP195550, "Beware: Indentation tokens depend on the parser\'s state!", 56);
STRING_LITERAL(TMP195551, "stdin", 5);
TY189208* Compmods_189227;
extern TNimType* NTI189208; /* TFileModuleMap */
extern TY10996 Gch_11014;
extern TY39019 Searchpaths_42086;
extern NimStringDesc* Libpath_42117;
extern NI Gid_51693;
extern TY102045 Gincludefile_102048;
extern TY102041 Gimportmodule_102044;
extern TNimType* NTI51524; /* PSym */
extern TNimType* NTI51548; /* TSym */
extern NU8 Gcmd_42089;
extern NimStringDesc* Cext_67342;
extern NU32 Gglobaloptions_42084;
extern NI Gerrormax_43568;
extern TNimType* NTI74267; /* TLexer */
extern TNimType* NTI74261; /* PToken */
extern TNimType* NTI74263; /* TToken */
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
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
if (!((NU32)(LOC9) < (NU32)(8))) goto LA10;
Rtladdzct_12401(C_13022);
LA10: ;
LA6: ;
(*Dest_13018) = Src_13019;
}
static N_INLINE(void, Setid_51696)(NI Id_51698) {
Gid_51693 = ((Gid_51693 >= (NI32)(Id_51698 + 1)) ? Gid_51693 : (NI32)(Id_51698 + 1));
}
N_NIMCALL(TY51548*, Getmodule_189256)(NimStringDesc* Filename_189258) {
TY51548* Result_189259;
NI I_189283;
NI HEX3Atmp_189284;
NI Res_189286;
NIM_BOOL LOC3;
Result_189259 = 0;
Result_189259 = NIM_NIL;
I_189283 = 0;
HEX3Atmp_189284 = 0;
HEX3Atmp_189284 = (Compmods_189227->Sup.len-1);
Res_189286 = 0;
Res_189286 = 0;
while (1) {
if (!(Res_189286 <= HEX3Atmp_189284)) goto LA1;
I_189283 = Res_189286;
LOC3 = nossameFile(Compmods_189227->data[I_189283].Filename, Filename_189258);
if (!LOC3) goto LA4;
Result_189259 = Compmods_189227->data[I_189283].Module;
goto BeforeRet;
LA4: ;
Res_189286 += 1;
} LA1: ;
BeforeRet: ;
return Result_189259;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418) {
NIM_BOOL Result_11419;
Result_11419 = 0;
Result_11419 = !((((*(*C_11418).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11419;
}
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054) {
Incl_10880(&Gch_11014.Cycleroots, C_12054);
}
static N_INLINE(void, Incref_13002)(TY10602* C_13004) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13004).Refcount, 8);
LOC3 = Canbecycleroot_11416(C_13004);
if (!LOC3) goto LA4;
Rtladdcycleroot_12052(C_13004);
LA4: ;
}
static N_INLINE(void, Decref_12801)(TY10602* C_12803) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_12803).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12401(C_12803);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11416(C_12803);
if (!LOC5) goto LA6;
Rtladdcycleroot_12052(C_12803);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015) {
TY10602* LOC4;
TY10602* LOC8;
if (!!((Src_13015 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11412(Src_13015);
Incref_13002(LOC4);
LA2: ;
if (!!(((*Dest_13014) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11412((*Dest_13014));
Decref_12801(LOC8);
LA6: ;
(*Dest_13014) = Src_13015;
}
N_NIMCALL(void, Registermodule_189229)(NimStringDesc* Filename_189231, TY51548* Module_189232) {
NI Length_189243;
Length_189243 = 0;
Length_189243 = Compmods_189227->Sup.len;
Compmods_189227 = (TY189208*) setLengthSeq(&(Compmods_189227)->Sup, sizeof(TY189206), (NI32)(Length_189243 + 1));
asgnRefNoCycle((void**) &Compmods_189227->data[Length_189243].Filename, copyString(Filename_189231));
asgnRef((void**) &Compmods_189227->data[Length_189243].Module, Module_189232);
}
N_NIMCALL(TY51548*, Newmodule_189287)(NimStringDesc* Filename_189289) {
TY51548* Result_189290;
TY34461 LOC1;
NIM_BOOL LOC3;
Result_189290 = 0;
Result_189290 = NIM_NIL;
Result_189290 = (TY51548*) newObj(NTI51524, sizeof(TY51548));
objectInit(Result_189290, NTI51548);
(*Result_189290).Sup.Id = -1;
(*Result_189290).Kind = ((NU8) 6);
memset((void*)&LOC1, 0, sizeof(LOC1));
nossplitFile(Filename_189289, &LOC1);
asgnRefNoCycle((void**) &(*Result_189290).Name, Getident_50016(LOC1.Name));
LOC3 = Isnimrodidentifier_74357((*(*Result_189290).Name).S);
if (!!(LOC3)) goto LA4;
Rawmessage_44094(((NU8) 19), (*(*Result_189290).Name).S);
LA4: ;
asgnRef((void**) &(*Result_189290).Owner, Result_189290);
(*Result_189290).Info = Newlineinfo_43718(Filename_189289, 1, 1);
(*Result_189290).Flags |=(1<<((NI32)(((NU8) 0))%(sizeof(NI32)*8)));
Initstrtable_51747(&(*Result_189290).Tab);
Registermodule_189229(Filename_189289, Result_189290);
Strtableadd_56061(&(*Result_189290).Tab, Result_189290);
return Result_189290;
}
static N_INLINE(NI, Getid_51694)(void) {
NI Result_51943;
Result_51943 = 0;
Result_51943 = Gid_51693;
Gid_51693 += 1;
return Result_51943;
}
N_NIMCALL(TY51548*, Compilemodule_189320)(NimStringDesc* Filename_189322, NIM_BOOL Ismainfile_189323, NIM_BOOL Issystemfile_189324) {
TY51548* Result_189356;
TY90031* Rd_189357;
NimStringDesc* F_189358;
NIM_BOOL LOC8;
Result_189356 = 0;
Rd_189357 = 0;
F_189358 = 0;
Result_189356 = NIM_NIL;
Rd_189357 = NIM_NIL;
Rd_189357 = NIM_NIL;
F_189358 = NIM_NIL;
F_189358 = nosaddFileExt(Filename_189322, ((NimStringDesc*) &TMP193880));
Result_189356 = Newmodule_189287(Filename_189322);
if (!Ismainfile_189323) goto LA2;
(*Result_189356).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LA2: ;
if (!Issystemfile_189324) goto LA5;
(*Result_189356).Flags |=(1<<((NI32)(((NU8) 16))%(sizeof(NI32)*8)));
LA5: ;
LOC8 = (Gcmd_42089 == ((NU8) 1));
if (LOC8) goto LA9;
LOC8 = (Gcmd_42089 == ((NU8) 2));
LA9: ;
if (!LOC8) goto LA10;
Rd_189357 = Handlesymbolfile_90060(Result_189356, F_189358);
if (!((*Result_189356).Sup.Id < 0)) goto LA13;
Internalerror_44212(((NimStringDesc*) &TMP193933));
LA13: ;
goto LA7;
LA10: ;
(*Result_189356).Sup.Id = Getid_51694();
LA7: ;
Processmodule_102035(Result_189356, F_189358, NIM_NIL, Rd_189357);
return Result_189356;
}
N_NIMCALL(TY51548*, Importmodule_189325)(NimStringDesc* Filename_189327) {
TY51548* Result_189328;
Result_189328 = 0;
Result_189328 = NIM_NIL;
Result_189328 = Getmodule_189256(Filename_189327);
if (!(Result_189328 == NIM_NIL)) goto LA2;
Result_189328 = Compilemodule_189320(Filename_189327, NIM_FALSE, NIM_FALSE);
goto LA1;
LA2: ;
if (!(((*Result_189328).Flags &(1<<((((NU8) 16))&31)))!=0)) goto LA4;
Localerror_44193((*Result_189328).Info, ((NU8) 37), (*(*Result_189328).Name).S);
goto LA1;
LA4: ;
LA1: ;
return Result_189328;
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
LOC11 = memcmp(((NCSTRING) ((*A_18449).data)), ((NCSTRING) ((*B_18450).data)), ((NI32) ((NI32)((*A_18449).Sup.len * 1))));
LOC9 = (LOC11 == ((NI32) 0));
LA10: ;
Result_18451 = LOC9;
goto BeforeRet;
BeforeRet: ;
return Result_18451;
}
N_NIMCALL(void, Wantfile_189707)(NimStringDesc* Filename_189709) {
TY43538 LOC4;
if (!((Filename_189709) && (Filename_189709)->Sup.len == 0)) goto LA2;
LOC4 = Newlineinfo_43718(((NimStringDesc*) &TMP193957), 1, 1);
Fatal_44183(LOC4, ((NU8) 182), ((NimStringDesc*) &TMP193958));
LA2: ;
}
N_NIMCALL(void, Semanticpasses_189408)(void) {
TY102006 LOC1;
TY102006 LOC2;
TY102006 LOC3;
LOC1 = Verbosepass_184045();
Registerpass_102028(&LOC1);
LOC2 = Sempass_128001();
Registerpass_102028(&LOC2);
LOC3 = Transfpass_186005();
Registerpass_102028(&LOC3);
}
N_NIMCALL(void, Compileproject_189405)(NimStringDesc* Filename_189407) {
NimStringDesc* LOC1;
NimStringDesc* LOC2;
TY51548* LOC3;
NimStringDesc* LOC4;
TY51548* LOC5;
LOC1 = 0;
LOC1 = nosaddFileExt(((NimStringDesc*) &TMP194911), ((NimStringDesc*) &TMP193880));
LOC2 = 0;
LOC2 = nosJoinPath(Libpath_42117, LOC1);
LOC3 = 0;
LOC3 = Compilemodule_189320(LOC2, NIM_FALSE, NIM_TRUE);
LOC4 = 0;
LOC4 = nosaddFileExt(Filename_189407, ((NimStringDesc*) &TMP193880));
LOC5 = 0;
LOC5 = Compilemodule_189320(LOC4, NIM_TRUE, NIM_FALSE);
}
N_NIMCALL(void, Commandcompiletoc_189416)(NimStringDesc* Filename_189418) {
TY102006 LOC1;
TY102006 LOC2;
NimStringDesc* LOC6;
Semanticpasses_189408();
LOC1 = Cgenpass_160201();
Registerpass_102028(&LOC1);
LOC2 = Rodwritepass_108001();
Registerpass_102028(&LOC2);
Compileproject_189405(Filename_189418);
if (!!((Gcmd_42089 == ((NU8) 19)))) goto LA4;
LOC6 = 0;
LOC6 = nosChangeFileExt(Filename_189418, ((NimStringDesc*) &TMP193958));
Callccompiler_67806(LOC6);
LA4: ;
}
N_NIMCALL(void, Commandcompiletoecmascript_189601)(NimStringDesc* Filename_189603) {
TY102006 LOC1;
Gglobaloptions_42084 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_47582(((NU8) 20), ((NU8) 12));
Initdefines_60049();
Semanticpasses_189408();
LOC1 = Ecmasgenpass_177004();
Registerpass_102028(&LOC1);
Compileproject_189405(Filename_189603);
}
N_NIMCALL(void, Commandpretty_189643)(NimStringDesc* Filename_189645) {
TY51526* Module_189646;
NimStringDesc* LOC1;
NimStringDesc* LOC5;
Module_189646 = 0;
Module_189646 = NIM_NIL;
LOC1 = 0;
LOC1 = nosaddFileExt(Filename_189645, ((NimStringDesc*) &TMP193880));
Module_189646 = Parsefile_89031(LOC1);
if (!!((Module_189646 == NIM_NIL))) goto LA3;
LOC5 = 0;
LOC5 = Getoutfile_42167(Filename_189645, ((NimStringDesc*) &TMP195132));
Rendermodule_82035(Module_189646, LOC5, 0);
LA3: ;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI32)((NI32)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* Dest_18616, NIM_CHAR C_18617) {
(*Dest_18616).data[((*Dest_18616).Sup.len)-0] = C_18617;
(*Dest_18616).data[((NI32)((*Dest_18616).Sup.len + 1))-0] = 0;
(*Dest_18616).Sup.len += 1;
}
N_NIMCALL(void, Commandgendepend_189410)(NimStringDesc* Filename_189412) {
TY102006 LOC1;
TY102006 LOC2;
NimStringDesc* LOC3;
NimStringDesc* LOC4;
NimStringDesc* LOC5;
Semanticpasses_189408();
LOC1 = Gendependpass_185004();
Registerpass_102028(&LOC1);
LOC2 = Cleanuppass_184173();
Registerpass_102028(&LOC2);
Compileproject_189405(Filename_189412);
Generatedot_185006(Filename_189412);
LOC3 = 0;
LOC4 = 0;
LOC4 = nosChangeFileExt(Filename_189412, ((NimStringDesc*) &TMP195545));
LOC5 = 0;
LOC5 = nosChangeFileExt(Filename_189412, ((NimStringDesc*) &TMP195546));
LOC3 = rawNewString(LOC4->Sup.len + LOC5->Sup.len + 13);
appendString(LOC3, ((NimStringDesc*) &TMP195544));
appendString(LOC3, LOC4);
appendChar(LOC3, 32);
appendString(LOC3, LOC5);
Execexternalprogram_67570(LOC3);
}
N_NIMCALL(void, Commandcheck_189413)(NimStringDesc* Filename_189415) {
Gerrormax_43568 = 2147483647;
Semanticpasses_189408();
Compileproject_189405(Filename_189415);
}
N_NIMCALL(void, Commandscan_189658)(NimStringDesc* Filename_189660) {
NimStringDesc* F_189661;
TY72204* Stream_189662;
TY74267 L_189674;
TY74263* Tok_189675;
F_189661 = 0;
Stream_189662 = 0;
memset((void*)&L_189674, 0, sizeof(L_189674));
L_189674.Sup.Sup.m_type = NTI74267;
Tok_189675 = 0;
F_189661 = NIM_NIL;
F_189661 = nosaddFileExt(Filename_189660, ((NimStringDesc*) &TMP193880));
Stream_189662 = NIM_NIL;
Stream_189662 = Llstreamopen_72224(F_189661, ((NU8) 0));
if (!!((Stream_189662 == NIM_NIL))) goto LA2;
genericReset((void*)&L_189674, NTI74267);
Tok_189675 = NIM_NIL;
Tok_189675 = (TY74263*) newObj(NTI74261, sizeof(TY74263));
(*Tok_189675).m_type = NTI74263;
Openlexer_74298(&L_189674, F_189661, Stream_189662);
while (1) {
Rawgettok_74304(&L_189674, Tok_189675);
Printtok_74320(Tok_189675);
if (!((*Tok_189675).Toktype == ((NU8) 1))) goto LA6;
goto LA4;
LA6: ;
} LA4: ;
Closelexer_74316(&L_189674);
goto LA1;
LA2: ;
Rawmessage_44094(((NU8) 2), F_189661);
LA1: ;
}
N_NIMCALL(void, Commandinteractive_189616)(void) {
TY102006 LOC1;
TY102006 LOC2;
TY102006 LOC3;
TY102006 LOC4;
NimStringDesc* LOC5;
NimStringDesc* LOC6;
TY51548* LOC7;
TY51548* M_189630;
TY72204* LOC8;
M_189630 = 0;
Gerrormax_43568 = 2147483647;
Gglobaloptions_42084 |=(1<<((NI32)(((NU8) 8))%(sizeof(NI32)*8)));
Settarget_47582(((NU8) 21), ((NU8) 13));
Initdefines_60049();
LOC1 = Verbosepass_184045();
Registerpass_102028(&LOC1);
LOC2 = Sempass_128001();
Registerpass_102028(&LOC2);
LOC3 = Transfpass_186005();
Registerpass_102028(&LOC3);
LOC4 = Evalpass_117511();
Registerpass_102028(&LOC4);
LOC5 = 0;
LOC5 = nosaddFileExt(((NimStringDesc*) &TMP194911), ((NimStringDesc*) &TMP193880));
LOC6 = 0;
LOC6 = nosJoinPath(Libpath_42117, LOC5);
LOC7 = 0;
LOC7 = Compilemodule_189320(LOC6, NIM_FALSE, NIM_TRUE);
M_189630 = NIM_NIL;
M_189630 = Newmodule_189287(((NimStringDesc*) &TMP195551));
(*M_189630).Sup.Id = Getid_51694();
(*M_189630).Flags |=(1<<((NI32)(((NU8) 15))%(sizeof(NI32)*8)));
LOC8 = 0;
LOC8 = Llstreamopenstdin_72230();
Processmodule_102035(M_189630, ((NimStringDesc*) &TMP195551), LOC8, NIM_NIL);
}
N_NIMCALL(void, Commandsuggest_189704)(NimStringDesc* Filename_189706) {
Gerrormax_43568 = 2147483647;
Semanticpasses_189408();
Compileproject_189405(Filename_189706);
}
N_NIMCALL(void, Maincommand_189201)(NimStringDesc* Cmd_189203, NimStringDesc* Filename_189204) {
TY34461 LOC4;
NimStringDesc* LOC5;
NimStringDesc* It_190001;
TY39015* It_190003;
NimStringDesc* LOC26;
TY51526* LOC27;
It_190001 = 0;
It_190003 = 0;
Appendstr_39061(&Searchpaths_42086, Libpath_42117);
if (!!(((Filename_189204) && (Filename_189204)->Sup.len == 0))) goto LA2;
memset((void*)&LOC4, 0, sizeof(LOC4));
nossplitFile(Filename_189204, &LOC4);
Prependstr_39071(&Searchpaths_42086, LOC4.Dir);
LA2: ;
Setid_51696(100);
Gincludefile_102048 = Parsefile_89031;
Gimportmodule_102044 = Importmodule_189325;
LOC5 = 0;
LOC5 = nsuNormalize(Cmd_189203);
switch (hashString(LOC5) & 31) {
case 0: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193937))) goto LA6;
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193941))) goto LA8;
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193956))) goto LA22;
break;
case 2: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193951))) goto LA17;
break;
case 4: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193953))) goto LA19;
break;
case 7: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193948))) goto LA14;
break;
case 9: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193942))) goto LA9;
break;
case 10: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193936))) goto LA6;
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193952))) goto LA18;
break;
case 11: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193950))) goto LA16;
break;
case 13: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193947))) goto LA13;
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193949))) goto LA15;
break;
case 14: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193940))) goto LA8;
break;
case 15: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193955))) goto LA21;
break;
case 16: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193938))) goto LA6;
break;
case 19: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193939))) goto LA7;
break;
case 23: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193944))) goto LA10;
break;
case 25: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193935))) goto LA6;
break;
case 26: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193946))) goto LA12;
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193954))) goto LA20;
break;
case 27: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193943))) goto LA10;
break;
case 28: 
if (eqStrings(LOC5, ((NimStringDesc*) &TMP193945))) goto LA11;
break;
}
goto LA23;
LA6: ;
Gcmd_42089 = ((NU8) 1);
Wantfile_189707(Filename_189204);
Commandcompiletoc_189416(Filename_189204);
goto LA24;
LA7: ;
asgnRefNoCycle((void**) &Cext_67342, copyString(((NimStringDesc*) &TMP194923)));
Gcmd_42089 = ((NU8) 2);
Wantfile_189707(Filename_189204);
Commandcompiletoc_189416(Filename_189204);
goto LA24;
LA8: ;
asgnRefNoCycle((void**) &Cext_67342, copyString(((NimStringDesc*) &TMP194924)));
Gcmd_42089 = ((NU8) 3);
Wantfile_189707(Filename_189204);
Commandcompiletoc_189416(Filename_189204);
goto LA24;
LA9: ;
Gcmd_42089 = ((NU8) 19);
Wantfile_189707(Filename_189204);
Rawmessage_44094(((NU8) 176), Cmd_189203);
goto LA24;
LA10: ;
Gcmd_42089 = ((NU8) 4);
Wantfile_189707(Filename_189204);
Commandcompiletoecmascript_189601(Filename_189204);
goto LA24;
LA11: ;
Gcmd_42089 = ((NU8) 5);
Wantfile_189707(Filename_189204);
Rawmessage_44094(((NU8) 176), Cmd_189203);
goto LA24;
LA12: ;
Gcmd_42089 = ((NU8) 7);
Wantfile_189707(Filename_189204);
Commandpretty_189643(Filename_189204);
goto LA24;
LA13: ;
Gcmd_42089 = ((NU8) 8);
Loadspecialconfig_77007(((NimStringDesc*) &TMP195133));
Wantfile_189707(Filename_189204);
Commanddoc_155001(Filename_189204);
goto LA24;
LA14: ;
Gcmd_42089 = ((NU8) 16);
Loadspecialconfig_77007(((NimStringDesc*) &TMP195133));
Wantfile_189707(Filename_189204);
Commandrst2html_155004(Filename_189204);
goto LA24;
LA15: ;
Gcmd_42089 = ((NU8) 17);
Loadspecialconfig_77007(((NimStringDesc*) &TMP195536));
Wantfile_189707(Filename_189204);
Commandrst2tex_155007(Filename_189204);
goto LA24;
LA16: ;
Gcmd_42089 = ((NU8) 9);
Wantfile_189707(Filename_189204);
Commandgendepend_189410(Filename_189204);
goto LA24;
LA17: ;
Gcmd_42089 = ((NU8) 10);
Listsymbols_60062();
It_190001 = NIM_NIL;
It_190003 = NIM_NIL;
It_190003 = ((TY39015*) (Searchpaths_42086.Head));
while (1) {
if (!!((It_190003 == NIM_NIL))) goto LA25;
It_190001 = (*It_190003).Data;
Msgwriteln_43794(It_190001);
It_190003 = ((TY39015*) ((*It_190003).Sup.Next));
} LA25: ;
goto LA24;
LA18: ;
Gcmd_42089 = ((NU8) 11);
Wantfile_189707(Filename_189204);
Commandcheck_189413(Filename_189204);
goto LA24;
LA19: ;
Gcmd_42089 = ((NU8) 12);
Wantfile_189707(Filename_189204);
LOC26 = 0;
LOC26 = nosaddFileExt(Filename_189204, ((NimStringDesc*) &TMP193880));
LOC27 = 0;
LOC27 = Parsefile_89031(LOC26);
goto LA24;
LA20: ;
Gcmd_42089 = ((NU8) 13);
Wantfile_189707(Filename_189204);
Commandscan_189658(Filename_189204);
Msgwriteln_43794(((NimStringDesc*) &TMP195550));
goto LA24;
LA21: ;
Gcmd_42089 = ((NU8) 18);
Commandinteractive_189616();
goto LA24;
LA22: ;
Gcmd_42089 = ((NU8) 14);
Wantfile_189707(Filename_189204);
Commandsuggest_189704(Filename_189204);
goto LA24;
LA23: ;
Rawmessage_44094(((NU8) 176), Cmd_189203);
LA24: ;
}
N_NOINLINE(void, mainInit)(void) {
asgnRefNoCycle((void**) &Compmods_189227, (TY189208*) newSeq(NTI189208, 0));
}

