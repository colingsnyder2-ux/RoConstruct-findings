// roc 2007-08 005f18e0  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f18e0
//
// 005f18e0  68f4778c00           push 0x8c77f4
// 005f18e5  68500c5f00           push 0x5f0c50
// 005f18ea  e8313c1300           call 0x725520
// 005f18ef  83c408               add esp, 8
// 005f18f2  e999edffff           jmp 0x5f0690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
