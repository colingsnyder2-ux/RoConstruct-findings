// roc 2008-06 006359e0  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006359e0
//
// 006359e0  6854cb9700           push 0x97cb54
// 006359e5  6850356300           push 0x633550
// 006359ea  e84119f2ff           call 0x557330
// 006359ef  83c408               add esp, 8
// 006359f2  e969d8ffff           jmp 0x633260
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
