// roc 2008-06 00554b70  unit: RBX::RunService  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00554b70
//
// 00554b70  56                   push esi
// 00554b71  8b31                 mov esi, dword ptr [ecx]
// 00554b73  85f6                 test esi, esi
// 00554b75  7410                 je 0x554b87
// 00554b77  8bce                 mov ecx, esi
// 00554b79  e8c21c0500           call 0x5a6840
// 00554b7e  56                   push esi
// 00554b7f  e8f6ba1400           call 0x6a067a
// 00554b84  83c404               add esp, 4
// 00554b87  5e                   pop esi
// 00554b88  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
