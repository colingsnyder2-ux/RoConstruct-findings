// roc 2007-08 004cd6a0  unit: 0RBX::View  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd6a0
//
// 004cd6a0  56                   push esi
// 004cd6a1  8b31                 mov esi, dword ptr [ecx]
// 004cd6a3  85f6                 test esi, esi
// 004cd6a5  7410                 je 0x4cd6b7
// 004cd6a7  8bce                 mov ecx, esi
// 004cd6a9  e872b90200           call 0x4f9020
// 004cd6ae  56                   push esi
// 004cd6af  e8ae251600           call 0x62fc62
// 004cd6b4  83c404               add esp, 4
// 004cd6b7  5e                   pop esi
// 004cd6b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
