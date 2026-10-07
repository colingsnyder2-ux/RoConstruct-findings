// roc 2008-06 00496d70  unit: RBX::Network::Players  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496d70
//
// 00496d70  56                   push esi
// 00496d71  8b31                 mov esi, dword ptr [ecx]
// 00496d73  85f6                 test esi, esi
// 00496d75  7410                 je 0x496d87
// 00496d77  8bce                 mov ecx, esi
// 00496d79  e832ef0f00           call 0x595cb0
// 00496d7e  56                   push esi
// 00496d7f  e8f6982000           call 0x6a067a
// 00496d84  83c404               add esp, 4
// 00496d87  5e                   pop esi
// 00496d88  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
