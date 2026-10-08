// roc 2007-08 005f1900  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1900
//
// 005f1900  68f8778c00           push 0x8c77f8
// 005f1905  68600c5f00           push 0x5f0c60
// 005f190a  e8113c1300           call 0x725520
// 005f190f  83c408               add esp, 8
// 005f1912  e9e9edffff           jmp 0x5f0700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
