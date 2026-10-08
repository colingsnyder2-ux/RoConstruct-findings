// roc 2007-08 005b0270  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0270
//
// 005b0270  68cc5d8c00           push 0x8c5dcc
// 005b0275  68b0fe5a00           push 0x5afeb0
// 005b027a  e8a1521700           call 0x725520
// 005b027f  83c408               add esp, 8
// 005b0282  e969faffff           jmp 0x5afcf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
