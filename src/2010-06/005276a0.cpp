// roc 2010-06 005276a0  unit: RBX::ViewG3D  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005276a0
//
// 005276a0  56                   push esi
// 005276a1  8b31                 mov esi, dword ptr [ecx]
// 005276a3  85f6                 test esi, esi
// 005276a5  7410                 je 0x5276b7
// 005276a7  8bce                 mov ecx, esi
// 005276a9  e802f7ffff           call 0x526db0
// 005276ae  56                   push esi
// 005276af  e8e6022800           call 0x7a799a
// 005276b4  83c404               add esp, 4
// 005276b7  5e                   pop esi
// 005276b8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
