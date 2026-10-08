// from server: 100% by auto
// roc 2009-06 006e7fd0  unit: RBX::EquationDisplay  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e7fd0
//
// 006e7fd0  56                   push esi
// 006e7fd1  8b31                 mov esi, dword ptr [ecx]
// 006e7fd3  85f6                 test esi, esi
// 006e7fd5  7410                 je 0x6e7fe7
// 006e7fd7  8bce                 mov ecx, esi
// 006e7fd9  e842ffffff           call 0x6e7f20
// 006e7fde  56                   push esi
// 006e7fdf  e84e0a0300           call 0x718a32
// 006e7fe4  83c404               add esp, 4
// 006e7fe7  5e                   pop esi
// 006e7fe8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
