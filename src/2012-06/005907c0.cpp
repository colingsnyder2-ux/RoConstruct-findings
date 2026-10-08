// from server: 100% by auto
// roc 2012-06 005907c0  unit: RBX::Network::ServerReplicator  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005907c0
//
// 005907c0  56                   push esi
// 005907c1  8b31                 mov esi, dword ptr [ecx]
// 005907c3  85f6                 test esi, esi
// 005907c5  7410                 je 0x5907d7
// 005907c7  8bce                 mov ecx, esi
// 005907c9  e8c29f0000           call 0x59a790
// 005907ce  56                   push esi
// 005907cf  e840193f00           call 0x982114
// 005907d4  83c404               add esp, 4
// 005907d7  5e                   pop esi
// 005907d8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
