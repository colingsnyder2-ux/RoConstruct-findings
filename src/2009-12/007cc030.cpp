// roc 2009-12 007cc030  unit: RBX::EquationDisplay  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cc030
//
// 007cc030  56                   push esi
// 007cc031  8b31                 mov esi, dword ptr [ecx]
// 007cc033  85f6                 test esi, esi
// 007cc035  7410                 je 0x7cc047
// 007cc037  8bce                 mov ecx, esi
// 007cc039  e842ffffff           call 0x7cbf80
// 007cc03e  56                   push esi
// 007cc03f  e816780200           call 0x7f385a
// 007cc044  83c404               add esp, 4
// 007cc047  5e                   pop esi
// 007cc048  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
