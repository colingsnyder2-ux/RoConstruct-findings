// roc 2012-06 004cd910  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cd910
//
// 004cd910  56                   push esi
// 004cd911  8b31                 mov esi, dword ptr [ecx]
// 004cd913  85f6                 test esi, esi
// 004cd915  7410                 je 0x4cd927
// 004cd917  8bce                 mov ecx, esi
// 004cd919  e8c2241a00           call 0x66fde0
// 004cd91e  56                   push esi
// 004cd91f  e8f0474b00           call 0x982114
// 004cd924  83c404               add esp, 4
// 004cd927  5e                   pop esi
// 004cd928  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
