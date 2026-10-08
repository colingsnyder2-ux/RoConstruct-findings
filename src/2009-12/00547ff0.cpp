// roc 2009-12 00547ff0  unit: RBX::Network::Replicator::ProcessPacketsJob  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00547ff0
//
// 00547ff0  56                   push esi
// 00547ff1  8b31                 mov esi, dword ptr [ecx]
// 00547ff3  85f6                 test esi, esi
// 00547ff5  7410                 je 0x548007
// 00547ff7  8bce                 mov ecx, esi
// 00547ff9  e8e28affff           call 0x540ae0
// 00547ffe  56                   push esi
// 00547fff  e856b82a00           call 0x7f385a
// 00548004  83c404               add esp, 4
// 00548007  5e                   pop esi
// 00548008  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
