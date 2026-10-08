// roc 2009-12 00462aa0  unit: CRobloxWnd::PartDropTarget  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00462aa0
//
// 00462aa0  56                   push esi
// 00462aa1  8b31                 mov esi, dword ptr [ecx]
// 00462aa3  85f6                 test esi, esi
// 00462aa5  7410                 je 0x462ab7
// 00462aa7  8bce                 mov ecx, esi
// 00462aa9  e8c2d30600           call 0x4cfe70
// 00462aae  56                   push esi
// 00462aaf  e8a60d3900           call 0x7f385a
// 00462ab4  83c404               add esp, 4
// 00462ab7  5e                   pop esi
// 00462ab8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
