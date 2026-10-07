// roc 2012-06 004cd950  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cd950
//
// 004cd950  56                   push esi
// 004cd951  8b31                 mov esi, dword ptr [ecx]
// 004cd953  85f6                 test esi, esi
// 004cd955  7410                 je 0x4cd967
// 004cd957  8bce                 mov ecx, esi
// 004cd959  e802aa0100           call 0x4e8360
// 004cd95e  56                   push esi
// 004cd95f  e8b0474b00           call 0x982114
// 004cd964  83c404               add esp, 4
// 004cd967  5e                   pop esi
// 004cd968  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
