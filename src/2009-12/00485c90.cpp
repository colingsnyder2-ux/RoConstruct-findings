// roc 2009-12 00485c90  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485c90
//
// 00485c90  56                   push esi
// 00485c91  8b31                 mov esi, dword ptr [ecx]
// 00485c93  85f6                 test esi, esi
// 00485c95  7410                 je 0x485ca7
// 00485c97  8bce                 mov ecx, esi
// 00485c99  e842930600           call 0x4eefe0
// 00485c9e  56                   push esi
// 00485c9f  e8b6db3600           call 0x7f385a
// 00485ca4  83c404               add esp, 4
// 00485ca7  5e                   pop esi
// 00485ca8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
