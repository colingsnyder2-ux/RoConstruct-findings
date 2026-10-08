// roc 2012-06 0075f6e0  unit: N::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0075f6e0
//
// 0075f6e0  68d0f67500           push 0x75f6d0
// 0075f6e5  68006be300           push 0xe36b00
// 0075f6ea  e8b11ecaff           call 0x4015a0
// 0075f6ef  83c408               add esp, 8
// 0075f6f2  e969ffffff           jmp 0x75f660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
