// roc 2010-06 005c2b80  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c2b80
//
// 005c2b80  68f0c65a00           push 0x5ac6f0
// 005c2b85  687cc2c000           push 0xc0c27c
// 005c2b8a  e801ebe3ff           call 0x401690
// 005c2b8f  83c408               add esp, 8
// 005c2b92  e9c995feff           jmp 0x5ac160
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
