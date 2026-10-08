// roc 2009-12 00463a70  unit: CRobloxWnd::RenderJob  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00463a70
//
// 00463a70  56                   push esi
// 00463a71  8b31                 mov esi, dword ptr [ecx]
// 00463a73  85f6                 test esi, esi
// 00463a75  7410                 je 0x463a87
// 00463a77  8bce                 mov ecx, esi
// 00463a79  e822fc0000           call 0x4736a0
// 00463a7e  56                   push esi
// 00463a7f  e8d6fd3800           call 0x7f385a
// 00463a84  83c404               add esp, 4
// 00463a87  5e                   pop esi
// 00463a88  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
