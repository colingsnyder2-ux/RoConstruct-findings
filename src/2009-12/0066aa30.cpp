// roc 2009-12 0066aa30  unit: RBX::$$A6AXVRunTransition::?$signal::slot  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0066aa30
//
// 0066aa30  56                   push esi
// 0066aa31  8b31                 mov esi, dword ptr [ecx]
// 0066aa33  85f6                 test esi, esi
// 0066aa35  7410                 je 0x66aa47
// 0066aa37  8bce                 mov ecx, esi
// 0066aa39  e8f2f2ffff           call 0x669d30
// 0066aa3e  56                   push esi
// 0066aa3f  e8168e1800           call 0x7f385a
// 0066aa44  83c404               add esp, 4
// 0066aa47  5e                   pop esi
// 0066aa48  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
