// roc 2009-12 006d2c30  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d2c30
//
// 006d2c30  6810674500           push 0x456710
// 006d2c35  68f0b7b700           push 0xb7b7f0
// 006d2c3a  e8f1e9d2ff           call 0x401630
// 006d2c3f  83c408               add esp, 8
// 006d2c42  e94922d8ff           jmp 0x454e90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
