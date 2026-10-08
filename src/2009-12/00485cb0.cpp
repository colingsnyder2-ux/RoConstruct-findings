// roc 2009-12 00485cb0  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00485cb0
//
// 00485cb0  56                   push esi
// 00485cb1  8b31                 mov esi, dword ptr [ecx]
// 00485cb3  85f6                 test esi, esi
// 00485cb5  7410                 je 0x485cc7
// 00485cb7  8bce                 mov ecx, esi
// 00485cb9  e8d2ed3c00           call 0x854a90
// 00485cbe  56                   push esi
// 00485cbf  e896db3600           call 0x7f385a
// 00485cc4  83c404               add esp, 4
// 00485cc7  5e                   pop esi
// 00485cc8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
