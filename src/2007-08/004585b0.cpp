// roc 2007-08 004585b0  unit: CRobloxWnd  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004585b0
//
// 004585b0  56                   push esi
// 004585b1  8b31                 mov esi, dword ptr [ecx]
// 004585b3  85f6                 test esi, esi
// 004585b5  7410                 je 0x4585c7
// 004585b7  8bce                 mov ecx, esi
// 004585b9  e8b2020200           call 0x478870
// 004585be  56                   push esi
// 004585bf  e89e761d00           call 0x62fc62
// 004585c4  83c404               add esp, 4
// 004585c7  5e                   pop esi
// 004585c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
