// roc 2010-06 005c1b50  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c1b50
//
// 005c1b50  6880c65a00           push 0x5ac680
// 005c1b55  6860c2c000           push 0xc0c260
// 005c1b5a  e831fbe3ff           call 0x401690
// 005c1b5f  83c408               add esp, 8
// 005c1b62  e9e9a2feff           jmp 0x5abe50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
