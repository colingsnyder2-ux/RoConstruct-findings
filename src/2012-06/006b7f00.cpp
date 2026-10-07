// roc 2012-06 006b7f00  unit: RBX::ScriptContext  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006b7f00
//
// 006b7f00  56                   push esi
// 006b7f01  8b31                 mov esi, dword ptr [ecx]
// 006b7f03  85f6                 test esi, esi
// 006b7f05  7410                 je 0x6b7f17
// 006b7f07  8bce                 mov ecx, esi
// 006b7f09  e8a2f7ffff           call 0x6b76b0
// 006b7f0e  56                   push esi
// 006b7f0f  e800a22c00           call 0x982114
// 006b7f14  83c404               add esp, 4
// 006b7f17  5e                   pop esi
// 006b7f18  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
