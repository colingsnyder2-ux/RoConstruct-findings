// roc 2009-12 006c5e80  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c5e80
//
// 006c5e80  6800cd4400           push 0x44cd00
// 006c5e85  688cb4b700           push 0xb7b48c
// 006c5e8a  e8a1b7d3ff           call 0x401630
// 006c5e8f  83c408               add esp, 8
// 006c5e92  e9995dd8ff           jmp 0x44bc30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
