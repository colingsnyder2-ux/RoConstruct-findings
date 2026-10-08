// roc 2010-06 006977e0  unit: RBX::VMotor6D::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006977e0
//
// 006977e0  68206e4e00           push 0x4e6e20
// 006977e5  688866c000           push 0xc06688
// 006977ea  e8a19ed6ff           call 0x401690
// 006977ef  83c408               add esp, 8
// 006977f2  e939e6e4ff           jmp 0x4e5e30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
