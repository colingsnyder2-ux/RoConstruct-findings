// from server: 100% by auto
// roc 2008-06 00430ea0  unit: CMainFrame  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430ea0
//
// 00430ea0  56                   push esi
// 00430ea1  8b31                 mov esi, dword ptr [ecx]
// 00430ea3  85f6                 test esi, esi
// 00430ea5  7410                 je 0x430eb7
// 00430ea7  8bce                 mov ecx, esi
// 00430ea9  e8f264ffff           call 0x4273a0
// 00430eae  56                   push esi
// 00430eaf  e8c6f72600           call 0x6a067a
// 00430eb4  83c404               add esp, 4
// 00430eb7  5e                   pop esi
// 00430eb8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
