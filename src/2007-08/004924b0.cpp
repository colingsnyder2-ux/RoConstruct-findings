// from server: 100% by auto
// roc 2007-08 004924b0  unit: RBX::Network::Players  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004924b0
//
// 004924b0  56                   push esi
// 004924b1  8b31                 mov esi, dword ptr [ecx]
// 004924b3  85f6                 test esi, esi
// 004924b5  7410                 je 0x4924c7
// 004924b7  8bce                 mov ecx, esi
// 004924b9  e812ef0d00           call 0x5713d0
// 004924be  56                   push esi
// 004924bf  e89ed71900           call 0x62fc62
// 004924c4  83c404               add esp, 4
// 004924c7  5e                   pop esi
// 004924c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
