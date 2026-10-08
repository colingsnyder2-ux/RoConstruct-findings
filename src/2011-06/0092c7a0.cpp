// from server: 100% by auto
// roc 2011-06 0092c7a0  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092c7a0
//
// 0092c7a0  56                   push esi
// 0092c7a1  8b31                 mov esi, dword ptr [ecx]
// 0092c7a3  85f6                 test esi, esi
// 0092c7a5  7410                 je 0x92c7b7
// 0092c7a7  8bce                 mov ecx, esi
// 0092c7a9  e832240300           call 0x95ebe0
// 0092c7ae  56                   push esi
// 0092c7af  e8a4d8edff           call 0x80a058
// 0092c7b4  83c404               add esp, 4
// 0092c7b7  5e                   pop esi
// 0092c7b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
