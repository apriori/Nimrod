/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY55011 TY55011;
typedef struct TY55005 TY55005;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
typedef NimStringDesc* TY73237[216];
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
struct TY55011 {
  TY55005 Sup;
NimStringDesc* S;
TY55011* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(void, Initspecials_73504)(void);
N_NIMCALL(TY55011*, Getident_55019)(NimStringDesc* Identifier_55021, NI H_55022);
N_NIMCALL(NI, Getnormalizedhash_45037)(NimStringDesc* S_45039);
N_NIMCALL(NU8, Whichkeyword_73492)(TY55011* Id_73494);
N_NIMCALL(TY55011*, Getident_55016)(NimStringDesc* Identifier_55018);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* A_24632, NimStringDesc* B_24633);
STRING_LITERAL(TMP73241, "", 0);
STRING_LITERAL(TMP73242, "addr", 4);
STRING_LITERAL(TMP73243, "and", 3);
STRING_LITERAL(TMP73244, "as", 2);
STRING_LITERAL(TMP73245, "asm", 3);
STRING_LITERAL(TMP73246, "atomic", 6);
STRING_LITERAL(TMP73247, "bind", 4);
STRING_LITERAL(TMP73248, "block", 5);
STRING_LITERAL(TMP73249, "break", 5);
STRING_LITERAL(TMP73250, "case", 4);
STRING_LITERAL(TMP73251, "cast", 4);
STRING_LITERAL(TMP73252, "const", 5);
STRING_LITERAL(TMP73253, "continue", 8);
STRING_LITERAL(TMP73254, "converter", 9);
STRING_LITERAL(TMP73255, "discard", 7);
STRING_LITERAL(TMP73256, "distinct", 8);
STRING_LITERAL(TMP73257, "div", 3);
STRING_LITERAL(TMP73258, "elif", 4);
STRING_LITERAL(TMP73259, "else", 4);
STRING_LITERAL(TMP73260, "end", 3);
STRING_LITERAL(TMP73261, "enum", 4);
STRING_LITERAL(TMP73262, "except", 6);
STRING_LITERAL(TMP73263, "finally", 7);
STRING_LITERAL(TMP73264, "for", 3);
STRING_LITERAL(TMP73265, "from", 4);
STRING_LITERAL(TMP73266, "generic", 7);
STRING_LITERAL(TMP73267, "if", 2);
STRING_LITERAL(TMP73268, "implies", 7);
STRING_LITERAL(TMP73269, "import", 6);
STRING_LITERAL(TMP73270, "in", 2);
STRING_LITERAL(TMP73271, "include", 7);
STRING_LITERAL(TMP73272, "is", 2);
STRING_LITERAL(TMP73273, "isnot", 5);
STRING_LITERAL(TMP73274, "iterator", 8);
STRING_LITERAL(TMP73275, "lambda", 6);
STRING_LITERAL(TMP73276, "let", 3);
STRING_LITERAL(TMP73277, "macro", 5);
STRING_LITERAL(TMP73278, "method", 6);
STRING_LITERAL(TMP73279, "mod", 3);
STRING_LITERAL(TMP73280, "nil", 3);
STRING_LITERAL(TMP73281, "not", 3);
STRING_LITERAL(TMP73282, "notin", 5);
STRING_LITERAL(TMP73283, "object", 6);
STRING_LITERAL(TMP73284, "of", 2);
STRING_LITERAL(TMP73285, "or", 2);
STRING_LITERAL(TMP73286, "out", 3);
STRING_LITERAL(TMP73287, "proc", 4);
STRING_LITERAL(TMP73288, "ptr", 3);
STRING_LITERAL(TMP73289, "raise", 5);
STRING_LITERAL(TMP73290, "ref", 3);
STRING_LITERAL(TMP73291, "return", 6);
STRING_LITERAL(TMP73292, "shl", 3);
STRING_LITERAL(TMP73293, "shr", 3);
STRING_LITERAL(TMP73294, "template", 8);
STRING_LITERAL(TMP73295, "try", 3);
STRING_LITERAL(TMP73296, "tuple", 5);
STRING_LITERAL(TMP73297, "type", 4);
STRING_LITERAL(TMP73298, "var", 3);
STRING_LITERAL(TMP73299, "when", 4);
STRING_LITERAL(TMP73300, "while", 5);
STRING_LITERAL(TMP73301, "with", 4);
STRING_LITERAL(TMP73302, "without", 7);
STRING_LITERAL(TMP73303, "xor", 3);
STRING_LITERAL(TMP73304, "yield", 5);
STRING_LITERAL(TMP73305, ":", 1);
STRING_LITERAL(TMP73306, "=", 1);
STRING_LITERAL(TMP73307, ".", 1);
STRING_LITERAL(TMP73308, "..", 2);
STRING_LITERAL(TMP73309, "^", 1);
STRING_LITERAL(TMP73310, "*", 1);
STRING_LITERAL(TMP73311, "-", 1);
STRING_LITERAL(TMP73312, "magic", 5);
STRING_LITERAL(TMP73313, "typecheck", 9);
STRING_LITERAL(TMP73314, "final", 5);
STRING_LITERAL(TMP73315, "profiler", 8);
STRING_LITERAL(TMP73316, "objchecks", 9);
STRING_LITERAL(TMP73317, "importc", 7);
STRING_LITERAL(TMP73318, "exportc", 7);
STRING_LITERAL(TMP73319, "extern", 6);
STRING_LITERAL(TMP73320, "align", 5);
STRING_LITERAL(TMP73321, "nodecl", 6);
STRING_LITERAL(TMP73322, "pure", 4);
STRING_LITERAL(TMP73323, "volatile", 8);
STRING_LITERAL(TMP73324, "register", 8);
STRING_LITERAL(TMP73325, "sideeffect", 10);
STRING_LITERAL(TMP73326, "header", 6);
STRING_LITERAL(TMP73327, "nosideeffect", 12);
STRING_LITERAL(TMP73328, "noreturn", 8);
STRING_LITERAL(TMP73329, "merge", 5);
STRING_LITERAL(TMP73330, "lib", 3);
STRING_LITERAL(TMP73331, "dynlib", 6);
STRING_LITERAL(TMP73332, "compilerproc", 12);
STRING_LITERAL(TMP73333, "procvar", 7);
STRING_LITERAL(TMP73334, "fatal", 5);
STRING_LITERAL(TMP73335, "error", 5);
STRING_LITERAL(TMP73336, "warning", 7);
STRING_LITERAL(TMP73337, "hint", 4);
STRING_LITERAL(TMP73338, "line", 4);
STRING_LITERAL(TMP73339, "push", 4);
STRING_LITERAL(TMP73340, "pop", 3);
STRING_LITERAL(TMP73341, "define", 6);
STRING_LITERAL(TMP73342, "undef", 5);
STRING_LITERAL(TMP73343, "linedir", 7);
STRING_LITERAL(TMP73344, "stacktrace", 10);
STRING_LITERAL(TMP73345, "linetrace", 9);
STRING_LITERAL(TMP73346, "parallelbuild", 13);
STRING_LITERAL(TMP73347, "link", 4);
STRING_LITERAL(TMP73348, "compile", 7);
STRING_LITERAL(TMP73349, "linksys", 7);
STRING_LITERAL(TMP73350, "deprecated", 10);
STRING_LITERAL(TMP73351, "varargs", 7);
STRING_LITERAL(TMP73352, "byref", 5);
STRING_LITERAL(TMP73353, "callconv", 8);
STRING_LITERAL(TMP73354, "breakpoint", 10);
STRING_LITERAL(TMP73355, "debugger", 8);
STRING_LITERAL(TMP73356, "nimcall", 7);
STRING_LITERAL(TMP73357, "stdcall", 7);
STRING_LITERAL(TMP73358, "cdecl", 5);
STRING_LITERAL(TMP73359, "safecall", 8);
STRING_LITERAL(TMP73360, "syscall", 7);
STRING_LITERAL(TMP73361, "inline", 6);
STRING_LITERAL(TMP73362, "noinline", 8);
STRING_LITERAL(TMP73363, "fastcall", 8);
STRING_LITERAL(TMP73364, "closure", 7);
STRING_LITERAL(TMP73365, "noconv", 6);
STRING_LITERAL(TMP73366, "on", 2);
STRING_LITERAL(TMP73367, "off", 3);
STRING_LITERAL(TMP73368, "checks", 6);
STRING_LITERAL(TMP73369, "rangechecks", 11);
STRING_LITERAL(TMP73370, "boundchecks", 11);
STRING_LITERAL(TMP73371, "overflowchecks", 14);
STRING_LITERAL(TMP73372, "nilchecks", 9);
STRING_LITERAL(TMP73373, "floatchecks", 11);
STRING_LITERAL(TMP73374, "nanchecks", 9);
STRING_LITERAL(TMP73375, "infchecks", 9);
STRING_LITERAL(TMP73376, "assertions", 10);
STRING_LITERAL(TMP73377, "warnings", 8);
STRING_LITERAL(TMP73378, "w", 1);
STRING_LITERAL(TMP73379, "hints", 5);
STRING_LITERAL(TMP73380, "optimization", 12);
STRING_LITERAL(TMP73381, "speed", 5);
STRING_LITERAL(TMP73382, "size", 4);
STRING_LITERAL(TMP73383, "none", 4);
STRING_LITERAL(TMP73384, "path", 4);
STRING_LITERAL(TMP73385, "p", 1);
STRING_LITERAL(TMP73386, "d", 1);
STRING_LITERAL(TMP73387, "u", 1);
STRING_LITERAL(TMP73388, "debuginfo", 9);
STRING_LITERAL(TMP73389, "compileonly", 11);
STRING_LITERAL(TMP73390, "nolinking", 9);
STRING_LITERAL(TMP73391, "forcebuild", 10);
STRING_LITERAL(TMP73392, "f", 1);
STRING_LITERAL(TMP73393, "deadcodeelim", 12);
STRING_LITERAL(TMP73394, "safecode", 8);
STRING_LITERAL(TMP73395, "pragma", 6);
STRING_LITERAL(TMP73396, "compiletime", 11);
STRING_LITERAL(TMP73397, "gc", 2);
STRING_LITERAL(TMP73398, "refc", 4);
STRING_LITERAL(TMP73399, "boehm", 5);
STRING_LITERAL(TMP73400, "a", 1);
STRING_LITERAL(TMP73401, "opt", 3);
STRING_LITERAL(TMP73402, "o", 1);
STRING_LITERAL(TMP73403, "app", 3);
STRING_LITERAL(TMP73404, "console", 7);
STRING_LITERAL(TMP73405, "gui", 3);
STRING_LITERAL(TMP73406, "passc", 5);
STRING_LITERAL(TMP73407, "t", 1);
STRING_LITERAL(TMP73408, "passl", 5);
STRING_LITERAL(TMP73409, "l", 1);
STRING_LITERAL(TMP73410, "listcmd", 7);
STRING_LITERAL(TMP73411, "gendoc", 6);
STRING_LITERAL(TMP73412, "genmapping", 10);
STRING_LITERAL(TMP73413, "os", 2);
STRING_LITERAL(TMP73414, "cpu", 3);
STRING_LITERAL(TMP73415, "generate", 8);
STRING_LITERAL(TMP73416, "g", 1);
STRING_LITERAL(TMP73417, "c", 1);
STRING_LITERAL(TMP73418, "cpp", 3);
STRING_LITERAL(TMP73419, "borrow", 6);
STRING_LITERAL(TMP73420, "run", 3);
STRING_LITERAL(TMP73421, "r", 1);
STRING_LITERAL(TMP73422, "verbosity", 9);
STRING_LITERAL(TMP73423, "v", 1);
STRING_LITERAL(TMP73424, "help", 4);
STRING_LITERAL(TMP73425, "h", 1);
STRING_LITERAL(TMP73426, "symbolfiles", 11);
STRING_LITERAL(TMP73427, "fieldchecks", 11);
STRING_LITERAL(TMP73428, "x", 1);
STRING_LITERAL(TMP73429, "version", 7);
STRING_LITERAL(TMP73430, "advanced", 8);
STRING_LITERAL(TMP73431, "skipcfg", 7);
STRING_LITERAL(TMP73432, "skipprojcfg", 11);
STRING_LITERAL(TMP73433, "cc", 2);
STRING_LITERAL(TMP73434, "genscript", 9);
STRING_LITERAL(TMP73435, "checkpoint", 10);
STRING_LITERAL(TMP73436, "checkpoints", 11);
STRING_LITERAL(TMP73437, "nomain", 6);
STRING_LITERAL(TMP73438, "subschar", 8);
STRING_LITERAL(TMP73439, "acyclic", 7);
STRING_LITERAL(TMP73440, "unroll", 6);
STRING_LITERAL(TMP73441, "linearscanend", 13);
STRING_LITERAL(TMP73442, "index", 5);
STRING_LITERAL(TMP73443, "write", 5);
STRING_LITERAL(TMP73444, "putenv", 6);
STRING_LITERAL(TMP73445, "prependenv", 10);
STRING_LITERAL(TMP73446, "appendenv", 9);
STRING_LITERAL(TMP73447, "threadvar", 9);
STRING_LITERAL(TMP73448, "emit", 4);
STRING_LITERAL(TMP73449, "threads", 7);
STRING_LITERAL(TMP73450, "recursivepath", 13);
STRING_LITERAL(TMP73451, "stdout", 6);
STRING_LITERAL(TMP73452, "idetools", 8);
STRING_LITERAL(TMP73453, "suggest", 7);
STRING_LITERAL(TMP73454, "track", 5);
STRING_LITERAL(TMP73455, "def", 3);
STRING_LITERAL(TMP73456, "context", 7);
NIM_CONST TY73237 Specialwords_73236 = {((NimStringDesc*) &TMP73241),
((NimStringDesc*) &TMP73242),
((NimStringDesc*) &TMP73243),
((NimStringDesc*) &TMP73244),
((NimStringDesc*) &TMP73245),
((NimStringDesc*) &TMP73246),
((NimStringDesc*) &TMP73247),
((NimStringDesc*) &TMP73248),
((NimStringDesc*) &TMP73249),
((NimStringDesc*) &TMP73250),
((NimStringDesc*) &TMP73251),
((NimStringDesc*) &TMP73252),
((NimStringDesc*) &TMP73253),
((NimStringDesc*) &TMP73254),
((NimStringDesc*) &TMP73255),
((NimStringDesc*) &TMP73256),
((NimStringDesc*) &TMP73257),
((NimStringDesc*) &TMP73258),
((NimStringDesc*) &TMP73259),
((NimStringDesc*) &TMP73260),
((NimStringDesc*) &TMP73261),
((NimStringDesc*) &TMP73262),
((NimStringDesc*) &TMP73263),
((NimStringDesc*) &TMP73264),
((NimStringDesc*) &TMP73265),
((NimStringDesc*) &TMP73266),
((NimStringDesc*) &TMP73267),
((NimStringDesc*) &TMP73268),
((NimStringDesc*) &TMP73269),
((NimStringDesc*) &TMP73270),
((NimStringDesc*) &TMP73271),
((NimStringDesc*) &TMP73272),
((NimStringDesc*) &TMP73273),
((NimStringDesc*) &TMP73274),
((NimStringDesc*) &TMP73275),
((NimStringDesc*) &TMP73276),
((NimStringDesc*) &TMP73277),
((NimStringDesc*) &TMP73278),
((NimStringDesc*) &TMP73279),
((NimStringDesc*) &TMP73280),
((NimStringDesc*) &TMP73281),
((NimStringDesc*) &TMP73282),
((NimStringDesc*) &TMP73283),
((NimStringDesc*) &TMP73284),
((NimStringDesc*) &TMP73285),
((NimStringDesc*) &TMP73286),
((NimStringDesc*) &TMP73287),
((NimStringDesc*) &TMP73288),
((NimStringDesc*) &TMP73289),
((NimStringDesc*) &TMP73290),
((NimStringDesc*) &TMP73291),
((NimStringDesc*) &TMP73292),
((NimStringDesc*) &TMP73293),
((NimStringDesc*) &TMP73294),
((NimStringDesc*) &TMP73295),
((NimStringDesc*) &TMP73296),
((NimStringDesc*) &TMP73297),
((NimStringDesc*) &TMP73298),
((NimStringDesc*) &TMP73299),
((NimStringDesc*) &TMP73300),
((NimStringDesc*) &TMP73301),
((NimStringDesc*) &TMP73302),
((NimStringDesc*) &TMP73303),
((NimStringDesc*) &TMP73304),
((NimStringDesc*) &TMP73305),
((NimStringDesc*) &TMP73306),
((NimStringDesc*) &TMP73307),
((NimStringDesc*) &TMP73308),
((NimStringDesc*) &TMP73309),
((NimStringDesc*) &TMP73310),
((NimStringDesc*) &TMP73311),
((NimStringDesc*) &TMP73312),
((NimStringDesc*) &TMP73313),
((NimStringDesc*) &TMP73314),
((NimStringDesc*) &TMP73315),
((NimStringDesc*) &TMP73316),
((NimStringDesc*) &TMP73317),
((NimStringDesc*) &TMP73318),
((NimStringDesc*) &TMP73319),
((NimStringDesc*) &TMP73320),
((NimStringDesc*) &TMP73321),
((NimStringDesc*) &TMP73322),
((NimStringDesc*) &TMP73323),
((NimStringDesc*) &TMP73324),
((NimStringDesc*) &TMP73325),
((NimStringDesc*) &TMP73326),
((NimStringDesc*) &TMP73327),
((NimStringDesc*) &TMP73328),
((NimStringDesc*) &TMP73329),
((NimStringDesc*) &TMP73330),
((NimStringDesc*) &TMP73331),
((NimStringDesc*) &TMP73332),
((NimStringDesc*) &TMP73333),
((NimStringDesc*) &TMP73334),
((NimStringDesc*) &TMP73335),
((NimStringDesc*) &TMP73336),
((NimStringDesc*) &TMP73337),
((NimStringDesc*) &TMP73338),
((NimStringDesc*) &TMP73339),
((NimStringDesc*) &TMP73340),
((NimStringDesc*) &TMP73341),
((NimStringDesc*) &TMP73342),
((NimStringDesc*) &TMP73343),
((NimStringDesc*) &TMP73344),
((NimStringDesc*) &TMP73345),
((NimStringDesc*) &TMP73346),
((NimStringDesc*) &TMP73347),
((NimStringDesc*) &TMP73348),
((NimStringDesc*) &TMP73349),
((NimStringDesc*) &TMP73350),
((NimStringDesc*) &TMP73351),
((NimStringDesc*) &TMP73352),
((NimStringDesc*) &TMP73353),
((NimStringDesc*) &TMP73354),
((NimStringDesc*) &TMP73355),
((NimStringDesc*) &TMP73356),
((NimStringDesc*) &TMP73357),
((NimStringDesc*) &TMP73358),
((NimStringDesc*) &TMP73359),
((NimStringDesc*) &TMP73360),
((NimStringDesc*) &TMP73361),
((NimStringDesc*) &TMP73362),
((NimStringDesc*) &TMP73363),
((NimStringDesc*) &TMP73364),
((NimStringDesc*) &TMP73365),
((NimStringDesc*) &TMP73366),
((NimStringDesc*) &TMP73367),
((NimStringDesc*) &TMP73368),
((NimStringDesc*) &TMP73369),
((NimStringDesc*) &TMP73370),
((NimStringDesc*) &TMP73371),
((NimStringDesc*) &TMP73372),
((NimStringDesc*) &TMP73373),
((NimStringDesc*) &TMP73374),
((NimStringDesc*) &TMP73375),
((NimStringDesc*) &TMP73376),
((NimStringDesc*) &TMP73377),
((NimStringDesc*) &TMP73378),
((NimStringDesc*) &TMP73379),
((NimStringDesc*) &TMP73380),
((NimStringDesc*) &TMP73381),
((NimStringDesc*) &TMP73382),
((NimStringDesc*) &TMP73383),
((NimStringDesc*) &TMP73384),
((NimStringDesc*) &TMP73385),
((NimStringDesc*) &TMP73386),
((NimStringDesc*) &TMP73387),
((NimStringDesc*) &TMP73388),
((NimStringDesc*) &TMP73389),
((NimStringDesc*) &TMP73390),
((NimStringDesc*) &TMP73391),
((NimStringDesc*) &TMP73392),
((NimStringDesc*) &TMP73393),
((NimStringDesc*) &TMP73394),
((NimStringDesc*) &TMP73395),
((NimStringDesc*) &TMP73396),
((NimStringDesc*) &TMP73397),
((NimStringDesc*) &TMP73398),
((NimStringDesc*) &TMP73399),
((NimStringDesc*) &TMP73400),
((NimStringDesc*) &TMP73401),
((NimStringDesc*) &TMP73402),
((NimStringDesc*) &TMP73403),
((NimStringDesc*) &TMP73404),
((NimStringDesc*) &TMP73405),
((NimStringDesc*) &TMP73406),
((NimStringDesc*) &TMP73407),
((NimStringDesc*) &TMP73408),
((NimStringDesc*) &TMP73409),
((NimStringDesc*) &TMP73410),
((NimStringDesc*) &TMP73411),
((NimStringDesc*) &TMP73412),
((NimStringDesc*) &TMP73413),
((NimStringDesc*) &TMP73414),
((NimStringDesc*) &TMP73415),
((NimStringDesc*) &TMP73416),
((NimStringDesc*) &TMP73417),
((NimStringDesc*) &TMP73418),
((NimStringDesc*) &TMP73419),
((NimStringDesc*) &TMP73420),
((NimStringDesc*) &TMP73421),
((NimStringDesc*) &TMP73422),
((NimStringDesc*) &TMP73423),
((NimStringDesc*) &TMP73424),
((NimStringDesc*) &TMP73425),
((NimStringDesc*) &TMP73426),
((NimStringDesc*) &TMP73427),
((NimStringDesc*) &TMP73428),
((NimStringDesc*) &TMP73429),
((NimStringDesc*) &TMP73430),
((NimStringDesc*) &TMP73431),
((NimStringDesc*) &TMP73432),
((NimStringDesc*) &TMP73433),
((NimStringDesc*) &TMP73434),
((NimStringDesc*) &TMP73435),
((NimStringDesc*) &TMP73436),
((NimStringDesc*) &TMP73437),
((NimStringDesc*) &TMP73438),
((NimStringDesc*) &TMP73439),
((NimStringDesc*) &TMP73440),
((NimStringDesc*) &TMP73441),
((NimStringDesc*) &TMP73442),
((NimStringDesc*) &TMP73443),
((NimStringDesc*) &TMP73444),
((NimStringDesc*) &TMP73445),
((NimStringDesc*) &TMP73446),
((NimStringDesc*) &TMP73447),
((NimStringDesc*) &TMP73448),
((NimStringDesc*) &TMP73449),
((NimStringDesc*) &TMP73450),
((NimStringDesc*) &TMP73451),
((NimStringDesc*) &TMP73452),
((NimStringDesc*) &TMP73453),
((NimStringDesc*) &TMP73454),
((NimStringDesc*) &TMP73455),
((NimStringDesc*) &TMP73456)}
;
N_NIMCALL(void, Initspecials_73504)(void) {
NU8 S_73545;
NU8 Res_73552;
NI LOC2;
TY55011* LOC3;
S_73545 = 0;
Res_73552 = 0;
Res_73552 = ((NU8) 1);
while (1) {
if (!(Res_73552 <= ((NU8) 215))) goto LA1;
S_73545 = Res_73552;
LOC2 = Getnormalizedhash_45037(Specialwords_73236[(S_73545)-0]);
LOC3 = 0;
LOC3 = Getident_55019(Specialwords_73236[(S_73545)-0], LOC2);
(*LOC3).Sup.Id = S_73545;
Res_73552 += 1;
} LA1: ;
}
N_NIMCALL(NU8, Whichkeyword_73492)(TY55011* Id_73494) {
NU8 Result_73495;
Result_73495 = 0;
if (!((*Id_73494).Sup.Id < 0)) goto LA2;
Result_73495 = ((NU8) 0);
goto LA1;
LA2: ;
Result_73495 = ((NU8) ((*Id_73494).Sup.Id));
LA1: ;
return Result_73495;
}
N_NIMCALL(NU8, Whichkeyword_73500)(NimStringDesc* Id_73502) {
NU8 Result_73503;
TY55011* LOC1;
Result_73503 = 0;
LOC1 = 0;
LOC1 = Getident_55016(Id_73502);
Result_73503 = Whichkeyword_73492(LOC1);
return Result_73503;
}
N_NIMCALL(NI, Findstr_73457)(NimStringDesc** A_73460, NI A_73460Len0, NimStringDesc* S_73461) {
NI Result_73462;
NI I_73486;
NI HEX3Atmp_73489;
NI Res_73491;
NI LOC3;
Result_73462 = 0;
I_73486 = 0;
HEX3Atmp_73489 = 0;
HEX3Atmp_73489 = (A_73460Len0-1);
Res_73491 = 0;
Res_73491 = 0;
while (1) {
if (!(Res_73491 <= HEX3Atmp_73489)) goto LA1;
I_73486 = Res_73491;
LOC3 = nsuCmpIgnoreStyle(A_73460[I_73486], S_73461);
if (!(LOC3 == 0)) goto LA4;
Result_73462 = I_73486;
goto BeforeRet;
LA4: ;
Res_73491 += 1;
} LA1: ;
Result_73462 = -1;
BeforeRet: ;
return Result_73462;
}
N_NOINLINE(void, wordrecgInit)(void) {
Initspecials_73504();
}

