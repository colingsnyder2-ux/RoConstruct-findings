// from server: 100% by auto
// roc 2010-06 00424f30  unit: ThreadLogManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00424f30
//
// 00424f30  56                   push esi
// 00424f31  8b31                 mov esi, dword ptr [ecx]
// 00424f33  85f6                 test esi, esi
// 00424f35  7410                 je 0x424f47
// 00424f37  8bce                 mov ecx, esi
// 00424f39  e892d40a00           call 0x4d23d0
// 00424f3e  56                   push esi
// 00424f3f  e8562a3800           call 0x7a799a
// 00424f44  83c404               add esp, 4
// 00424f47  5e                   pop esi
// 00424f48  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
