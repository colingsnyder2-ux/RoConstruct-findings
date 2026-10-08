// roc 2009-06 005f4a60  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f4a60
//
// 005f4a60  6860a25e00           push 0x5ea260
// 005f4a65  68e449a400           push 0xa449e4
// 005f4a6a  e8a1cce0ff           call 0x401710
// 005f4a6f  83c408               add esp, 8
// 005f4a72  e9c952ffff           jmp 0x5e9d40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
