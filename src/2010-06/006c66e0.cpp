// roc 2010-06 006c66e0  unit: RBX::VForceField::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c66e0
//
// 006c66e0  6850c45a00           push 0x5ac450
// 006c66e5  68d4c1c000           push 0xc0c1d4
// 006c66ea  e8a1afd3ff           call 0x401690
// 006c66ef  83c408               add esp, 8
// 006c66f2  e90948eeff           jmp 0x5aaf00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
