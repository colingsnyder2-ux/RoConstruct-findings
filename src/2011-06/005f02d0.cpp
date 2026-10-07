// roc 2011-06 005f02d0  unit: RBX::$$A6AXVRunTransition::?$signal::Vslot::?$callable  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005f02d0
//
// 005f02d0  56                   push esi
// 005f02d1  8b31                 mov esi, dword ptr [ecx]
// 005f02d3  85f6                 test esi, esi
// 005f02d5  7410                 je 0x5f02e7
// 005f02d7  8bce                 mov ecx, esi
// 005f02d9  e8e2d9ffff           call 0x5edcc0
// 005f02de  56                   push esi
// 005f02df  e8749d2100           call 0x80a058
// 005f02e4  83c404               add esp, 4
// 005f02e7  5e                   pop esi
// 005f02e8  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??1RegEx@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
