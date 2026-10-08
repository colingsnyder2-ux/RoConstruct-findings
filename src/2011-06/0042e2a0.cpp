// from server: 100% by auto
// roc 2011-06 0042e2a0  unit: ThreadLogManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042e2a0
//
// 0042e2a0  56                   push esi
// 0042e2a1  8b31                 mov esi, dword ptr [ecx]
// 0042e2a3  85f6                 test esi, esi
// 0042e2a5  7410                 je 0x42e2b7
// 0042e2a7  8bce                 mov ecx, esi
// 0042e2a9  e8d2070b00           call 0x4dea80
// 0042e2ae  56                   push esi
// 0042e2af  e8a4bd3d00           call 0x80a058
// 0042e2b4  83c404               add esp, 4
// 0042e2b7  5e                   pop esi
// 0042e2b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
