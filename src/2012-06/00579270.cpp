// from server: 100% by auto
// roc 2012-06 00579270  unit: RBX::Network::Replicator  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00579270
//
// 00579270  56                   push esi
// 00579271  8b31                 mov esi, dword ptr [ecx]
// 00579273  85f6                 test esi, esi
// 00579275  7410                 je 0x579287
// 00579277  8bce                 mov ecx, esi
// 00579279  e8923fe9ff           call 0x40d210
// 0057927e  56                   push esi
// 0057927f  e8908e4000           call 0x982114
// 00579284  83c404               add esp, 4
// 00579287  5e                   pop esi
// 00579288  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
