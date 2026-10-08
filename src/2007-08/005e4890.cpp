// roc 2007-08 005e4890  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e4890
//
// 005e4890  68006f8c00           push 0x8c6f00
// 005e4895  68b0415e00           push 0x5e41b0
// 005e489a  e8810c1400           call 0x725520
// 005e489f  83c408               add esp, 8
// 005e48a2  e9d9f7ffff           jmp 0x5e4080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
