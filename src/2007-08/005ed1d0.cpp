// roc 2007-08 005ed1d0  unit: RBX::VBodyForce::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed1d0
//
// 005ed1d0  68cc378c00           push 0x8c37cc
// 005ed1d5  68b0dd5800           push 0x58ddb0
// 005ed1da  e841831300           call 0x725520
// 005ed1df  83c408               add esp, 8
// 005ed1e2  e92907faff           jmp 0x58d910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
