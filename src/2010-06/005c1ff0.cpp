// roc 2010-06 005c1ff0  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c1ff0
//
// 005c1ff0  68a0c65a00           push 0x5ac6a0
// 005c1ff5  6868c2c000           push 0xc0c268
// 005c1ffa  e891f6e3ff           call 0x401690
// 005c1fff  83c408               add esp, 8
// 005c2002  e9299ffeff           jmp 0x5abf30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
