// roc 2012-06 00432ba0  unit: ThreadLogManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00432ba0
//
// 00432ba0  56                   push esi
// 00432ba1  8b31                 mov esi, dword ptr [ecx]
// 00432ba3  85f6                 test esi, esi
// 00432ba5  7410                 je 0x432bb7
// 00432ba7  8bce                 mov ecx, esi
// 00432ba9  e812521200           call 0x557dc0
// 00432bae  56                   push esi
// 00432baf  e860f55400           call 0x982114
// 00432bb4  83c404               add esp, 4
// 00432bb7  5e                   pop esi
// 00432bb8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
