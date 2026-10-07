// roc 2012-06 008a4a80  unit: RBX::ResizeTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a4a80
//
// 008a4a80  56                   push esi
// 008a4a81  8b31                 mov esi, dword ptr [ecx]
// 008a4a83  85f6                 test esi, esi
// 008a4a85  7410                 je 0x8a4a97
// 008a4a87  8bce                 mov ecx, esi
// 008a4a89  e8d279ffff           call 0x89c460
// 008a4a8e  56                   push esi
// 008a4a8f  e880d60d00           call 0x982114
// 008a4a94  83c404               add esp, 4
// 008a4a97  5e                   pop esi
// 008a4a98  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
