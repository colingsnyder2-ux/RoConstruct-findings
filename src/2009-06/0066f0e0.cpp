// roc 2009-06 0066f0e0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066f0e0
//
// 0066f0e0  6860534800           push 0x485360
// 0066f0e5  6844c7a300           push 0xa3c744
// 0066f0ea  e82126d9ff           call 0x401710
// 0066f0ef  83c408               add esp, 8
// 0066f0f2  e9295fe1ff           jmp 0x485020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
