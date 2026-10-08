// roc 2007-08 005f18a0  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f18a0
//
// 005f18a0  68ec778c00           push 0x8c77ec
// 005f18a5  68300c5f00           push 0x5f0c30
// 005f18aa  e8713c1300           call 0x725520
// 005f18af  83c408               add esp, 8
// 005f18b2  e9f9ecffff           jmp 0x5f05b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
