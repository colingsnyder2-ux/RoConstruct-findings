// from server: 100% by auto
// roc 2009-06 004d4310  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d4310
//
// 004d4310  56                   push esi
// 004d4311  8b31                 mov esi, dword ptr [ecx]
// 004d4313  85f6                 test esi, esi
// 004d4315  7410                 je 0x4d4327
// 004d4317  8bce                 mov ecx, esi
// 004d4319  e842d1ffff           call 0x4d1460
// 004d431e  56                   push esi
// 004d431f  e80e472400           call 0x718a32
// 004d4324  83c404               add esp, 4
// 004d4327  5e                   pop esi
// 004d4328  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
