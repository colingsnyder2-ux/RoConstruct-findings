// from server: 100% by auto
// roc 2012-06 004cd930  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004cd930
//
// 004cd930  56                   push esi
// 004cd931  8b31                 mov esi, dword ptr [ecx]
// 004cd933  85f6                 test esi, esi
// 004cd935  7410                 je 0x4cd947
// 004cd937  8bce                 mov ecx, esi
// 004cd939  e8a26e0300           call 0x5047e0
// 004cd93e  56                   push esi
// 004cd93f  e8d0474b00           call 0x982114
// 004cd944  83c404               add esp, 4
// 004cd947  5e                   pop esi
// 004cd948  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
