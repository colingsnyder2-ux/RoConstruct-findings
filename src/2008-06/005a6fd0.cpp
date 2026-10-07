// roc 2008-06 005a6fd0  unit: RBX::Log  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a6fd0
//
// 005a6fd0  56                   push esi
// 005a6fd1  8b31                 mov esi, dword ptr [ecx]
// 005a6fd3  85f6                 test esi, esi
// 005a6fd5  7410                 je 0x5a6fe7
// 005a6fd7  8bce                 mov ecx, esi
// 005a6fd9  e8d2dcfeff           call 0x594cb0
// 005a6fde  56                   push esi
// 005a6fdf  e896960f00           call 0x6a067a
// 005a6fe4  83c404               add esp, 4
// 005a6fe7  5e                   pop esi
// 005a6fe8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
