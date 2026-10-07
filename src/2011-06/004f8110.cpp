// roc 2011-06 004f8110  unit: RBX::Network::Replicator::SendDataJob  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f8110
//
// 004f8110  56                   push esi
// 004f8111  8b31                 mov esi, dword ptr [ecx]
// 004f8113  85f6                 test esi, esi
// 004f8115  7410                 je 0x4f8127
// 004f8117  8bce                 mov ecx, esi
// 004f8119  e822991c00           call 0x6c1a40
// 004f811e  56                   push esi
// 004f811f  e8341f3100           call 0x80a058
// 004f8124  83c404               add esp, 4
// 004f8127  5e                   pop esi
// 004f8128  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
