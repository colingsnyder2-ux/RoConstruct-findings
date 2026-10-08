// from server: 100% by auto
// roc 2011-06 0092c780  unit: Ogre::GfxClustererPart  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092c780
//
// 0092c780  56                   push esi
// 0092c781  8b31                 mov esi, dword ptr [ecx]
// 0092c783  85f6                 test esi, esi
// 0092c785  7410                 je 0x92c797
// 0092c787  8bce                 mov ecx, esi
// 0092c789  e8727ec5ff           call 0x584600
// 0092c78e  56                   push esi
// 0092c78f  e8c4d8edff           call 0x80a058
// 0092c794  83c404               add esp, 4
// 0092c797  5e                   pop esi
// 0092c798  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
