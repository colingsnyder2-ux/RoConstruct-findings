// from server: 100% by auto
// roc 2010-06 007750b0  unit: RBX::EquationDisplay  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007750b0
//
// 007750b0  56                   push esi
// 007750b1  8b31                 mov esi, dword ptr [ecx]
// 007750b3  85f6                 test esi, esi
// 007750b5  7410                 je 0x7750c7
// 007750b7  8bce                 mov ecx, esi
// 007750b9  e842ffffff           call 0x775000
// 007750be  56                   push esi
// 007750bf  e8d6280300           call 0x7a799a
// 007750c4  83c404               add esp, 4
// 007750c7  5e                   pop esi
// 007750c8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
