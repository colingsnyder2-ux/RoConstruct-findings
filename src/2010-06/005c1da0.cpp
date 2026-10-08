// roc 2010-06 005c1da0  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c1da0
//
// 005c1da0  6890c65a00           push 0x5ac690
// 005c1da5  6864c2c000           push 0xc0c264
// 005c1daa  e8e1f8e3ff           call 0x401690
// 005c1daf  83c408               add esp, 8
// 005c1db2  e909a1feff           jmp 0x5abec0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
