// roc 2009-06 005f4cb0  unit: RBX::N$1?sDoubleValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f4cb0
//
// 005f4cb0  6870a25e00           push 0x5ea270
// 005f4cb5  68e849a400           push 0xa449e8
// 005f4cba  e851cae0ff           call 0x401710
// 005f4cbf  83c408               add esp, 8
// 005f4cc2  e9e950ffff           jmp 0x5e9db0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
