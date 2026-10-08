// roc 2007-08 005b07b0  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b07b0
//
// 005b07b0  686ce98b00           push 0x8be96c
// 005b07b5  6880714a00           push 0x4a7180
// 005b07ba  e8614d1700           call 0x725520
// 005b07bf  83c408               add esp, 8
// 005b07c2  e9a951efff           jmp 0x4a5970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
