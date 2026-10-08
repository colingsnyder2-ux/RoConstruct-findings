// roc 2009-12 00424bb0  unit: ThreadLogManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00424bb0
//
// 00424bb0  56                   push esi
// 00424bb1  8b31                 mov esi, dword ptr [ecx]
// 00424bb3  85f6                 test esi, esi
// 00424bb5  7410                 je 0x424bc7
// 00424bb7  8bce                 mov ecx, esi
// 00424bb9  e862ff0f00           call 0x524b20
// 00424bbe  56                   push esi
// 00424bbf  e896ec3c00           call 0x7f385a
// 00424bc4  83c404               add esp, 4
// 00424bc7  5e                   pop esi
// 00424bc8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
