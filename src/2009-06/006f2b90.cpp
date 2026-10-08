// from server: 100% by auto
// roc 2009-06 006f2b90  unit: RBX::PartDropTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f2b90
//
// 006f2b90  56                   push esi
// 006f2b91  8b31                 mov esi, dword ptr [ecx]
// 006f2b93  85f6                 test esi, esi
// 006f2b95  7410                 je 0x6f2ba7
// 006f2b97  8bce                 mov ecx, esi
// 006f2b99  e8024b0000           call 0x6f76a0
// 006f2b9e  56                   push esi
// 006f2b9f  e88e5e0200           call 0x718a32
// 006f2ba4  83c404               add esp, 4
// 006f2ba7  5e                   pop esi
// 006f2ba8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
