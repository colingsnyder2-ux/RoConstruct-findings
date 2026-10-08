// from server: 100% by auto
// roc 2010-06 00526d90  unit: RBX::ViewG3D  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00526d90
//
// 00526d90  56                   push esi
// 00526d91  8b31                 mov esi, dword ptr [ecx]
// 00526d93  85f6                 test esi, esi
// 00526d95  7410                 je 0x526da7
// 00526d97  8bce                 mov ecx, esi
// 00526d99  e802fcf6ff           call 0x4969a0
// 00526d9e  56                   push esi
// 00526d9f  e8f60b2800           call 0x7a799a
// 00526da4  83c404               add esp, 4
// 00526da7  5e                   pop esi
// 00526da8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
