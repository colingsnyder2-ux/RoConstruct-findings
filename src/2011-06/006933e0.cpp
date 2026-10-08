// roc 2011-06 006933e0  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006933e0
//
// 006933e0  6810594a00           push 0x4a5910
// 006933e5  68ec53cb00           push 0xcb53ec
// 006933ea  e821e2d6ff           call 0x401610
// 006933ef  83c408               add esp, 8
// 006933f2  e9b90be1ff           jmp 0x4a3fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
