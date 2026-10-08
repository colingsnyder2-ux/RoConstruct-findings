// from server: 100% by auto
// roc 2007-08 0052cf30  unit: RBX::VRunService::?$FactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052cf30
//
// 0052cf30  56                   push esi
// 0052cf31  8b31                 mov esi, dword ptr [ecx]
// 0052cf33  85f6                 test esi, esi
// 0052cf35  7410                 je 0x52cf47
// 0052cf37  8bce                 mov ecx, esi
// 0052cf39  e802951f00           call 0x726440
// 0052cf3e  56                   push esi
// 0052cf3f  e81e2d1000           call 0x62fc62
// 0052cf44  83c404               add esp, 4
// 0052cf47  5e                   pop esi
// 0052cf48  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
