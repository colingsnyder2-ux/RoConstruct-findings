// roc 2010-06 005d19e0  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005d19e0
//
// 005d19e0  56                   push esi
// 005d19e1  8b31                 mov esi, dword ptr [ecx]
// 005d19e3  85f6                 test esi, esi
// 005d19e5  7410                 je 0x5d19f7
// 005d19e7  8bce                 mov ecx, esi
// 005d19e9  e8d2f0ffff           call 0x5d0ac0
// 005d19ee  56                   push esi
// 005d19ef  e8a65f1d00           call 0x7a799a
// 005d19f4  83c404               add esp, 4
// 005d19f7  5e                   pop esi
// 005d19f8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
