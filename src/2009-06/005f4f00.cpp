// roc 2009-06 005f4f00  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f4f00
//
// 005f4f00  6880a25e00           push 0x5ea280
// 005f4f05  68ec49a400           push 0xa449ec
// 005f4f0a  e801c8e0ff           call 0x401710
// 005f4f0f  83c408               add esp, 8
// 005f4f12  e9094fffff           jmp 0x5e9e20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
