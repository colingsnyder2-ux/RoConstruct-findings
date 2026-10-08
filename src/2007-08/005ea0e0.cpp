// roc 2007-08 005ea0e0  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea0e0
//
// 005ea0e0  68c0378c00           push 0x8c37c0
// 005ea0e5  6880dd5800           push 0x58dd80
// 005ea0ea  e831b41300           call 0x725520
// 005ea0ef  83c408               add esp, 8
// 005ea0f2  e9c936faff           jmp 0x58d7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
