// roc 2010-06 005c2490  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c2490
//
// 005c2490  68c0c65a00           push 0x5ac6c0
// 005c2495  6870c2c000           push 0xc0c270
// 005c249a  e8f1f1e3ff           call 0x401690
// 005c249f  83c408               add esp, 8
// 005c24a2  e9699bfeff           jmp 0x5ac010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
