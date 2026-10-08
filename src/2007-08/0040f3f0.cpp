// from server: 100% by auto
// roc 2007-08 0040f3f0  unit: CutVerb  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f3f0
//
// 0040f3f0  56                   push esi
// 0040f3f1  8b31                 mov esi, dword ptr [ecx]
// 0040f3f3  85f6                 test esi, esi
// 0040f3f5  7410                 je 0x40f407
// 0040f3f7  8bce                 mov ecx, esi
// 0040f3f9  e802040000           call 0x40f800
// 0040f3fe  56                   push esi
// 0040f3ff  e85e082200           call 0x62fc62
// 0040f404  83c404               add esp, 4
// 0040f407  5e                   pop esi
// 0040f408  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
