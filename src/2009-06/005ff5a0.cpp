// roc 2009-06 005ff5a0  unit: RBX::Reflection::UTuple::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ff5a0
//
// 005ff5a0  56                   push esi
// 005ff5a1  8b31                 mov esi, dword ptr [ecx]
// 005ff5a3  85f6                 test esi, esi
// 005ff5a5  7410                 je 0x5ff5b7
// 005ff5a7  8bce                 mov ecx, esi
// 005ff5a9  e842edffff           call 0x5fe2f0
// 005ff5ae  56                   push esi
// 005ff5af  e87e941100           call 0x718a32
// 005ff5b4  83c404               add esp, 4
// 005ff5b7  5e                   pop esi
// 005ff5b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
