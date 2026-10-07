// roc 2007-08 005fe1f0  unit: RBX::ArrowTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe1f0
//
// 005fe1f0  56                   push esi
// 005fe1f1  8b31                 mov esi, dword ptr [ecx]
// 005fe1f3  85f6                 test esi, esi
// 005fe1f5  7410                 je 0x5fe207
// 005fe1f7  8bce                 mov ecx, esi
// 005fe1f9  e8f22cfeff           call 0x5e0ef0
// 005fe1fe  56                   push esi
// 005fe1ff  e85e1a0300           call 0x62fc62
// 005fe204  83c404               add esp, 4
// 005fe207  5e                   pop esi
// 005fe208  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
