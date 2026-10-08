// roc 2009-06 006250a0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006250a0
//
// 006250a0  6830734100           push 0x417330
// 006250a5  685ca1a300           push 0xa3a15c
// 006250aa  e861c6ddff           call 0x401710
// 006250af  83c408               add esp, 8
// 006250b2  e9a920dfff           jmp 0x417160
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
