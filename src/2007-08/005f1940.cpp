// roc 2007-08 005f1940  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1940
//
// 005f1940  6800788c00           push 0x8c7800
// 005f1945  68800c5f00           push 0x5f0c80
// 005f194a  e8d13b1300           call 0x725520
// 005f194f  83c408               add esp, 8
// 005f1952  e989eeffff           jmp 0x5f07e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
