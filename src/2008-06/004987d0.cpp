// roc 2008-06 004987d0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004987d0
//
// 004987d0  56                   push esi
// 004987d1  8b31                 mov esi, dword ptr [ecx]
// 004987d3  85f6                 test esi, esi
// 004987d5  7410                 je 0x4987e7
// 004987d7  8bce                 mov ecx, esi
// 004987d9  e8e2e9ffff           call 0x4971c0
// 004987de  56                   push esi
// 004987df  e8967e2000           call 0x6a067a
// 004987e4  83c404               add esp, 4
// 004987e7  5e                   pop esi
// 004987e8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
