// roc 2007-08 005ed210  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed210
//
// 005ed210  68d4378c00           push 0x8c37d4
// 005ed215  68d0dd5800           push 0x58ddd0
// 005ed21a  e801831300           call 0x725520
// 005ed21f  83c408               add esp, 8
// 005ed222  e9c907faff           jmp 0x58d9f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
