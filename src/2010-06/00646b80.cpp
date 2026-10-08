// from server: 100% by auto
// roc 2010-06 00646b80  unit: RBX::ResizeTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00646b80
//
// 00646b80  56                   push esi
// 00646b81  8b31                 mov esi, dword ptr [ecx]
// 00646b83  85f6                 test esi, esi
// 00646b85  7410                 je 0x646b97
// 00646b87  8bce                 mov ecx, esi
// 00646b89  e822190d00           call 0x7184b0
// 00646b8e  56                   push esi
// 00646b8f  e8060e1600           call 0x7a799a
// 00646b94  83c404               add esp, 4
// 00646b97  5e                   pop esi
// 00646b98  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
