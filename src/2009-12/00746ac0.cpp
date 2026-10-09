// roc 2009-12 00746ac0  unit: RBX::VForceField::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00746ac0
//
// 00746ac0  6880996400           push 0x649980
// 00746ac5  68f45fb800           push 0xb85ff4
// 00746aca  e861abcbff           call 0x401630
// 00746acf  83c408               add esp, 8
// 00746ad2  e9891bf0ff           jmp 0x648660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
