// from server: 100% by auto
// roc 2010-06 004592b0  unit: VCWorkspace::?$CComObject  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004592b0
//
// 004592b0  56                   push esi
// 004592b1  8b31                 mov esi, dword ptr [ecx]
// 004592b3  85f6                 test esi, esi
// 004592b5  7410                 je 0x4592c7
// 004592b7  8bce                 mov ecx, esi
// 004592b9  e852e5ffff           call 0x457810
// 004592be  56                   push esi
// 004592bf  e8d6e63400           call 0x7a799a
// 004592c4  83c404               add esp, 4
// 004592c7  5e                   pop esi
// 004592c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
