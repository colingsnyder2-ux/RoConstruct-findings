// roc 2009-12 006d4d30  unit: RBX::ResizeTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d4d30
//
// 006d4d30  56                   push esi
// 006d4d31  8b31                 mov esi, dword ptr [ecx]
// 006d4d33  85f6                 test esi, esi
// 006d4d35  7410                 je 0x6d4d47
// 006d4d37  8bce                 mov ecx, esi
// 006d4d39  e852d40a00           call 0x782190
// 006d4d3e  56                   push esi
// 006d4d3f  e816eb1100           call 0x7f385a
// 006d4d44  83c404               add esp, 4
// 006d4d47  5e                   pop esi
// 006d4d48  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
