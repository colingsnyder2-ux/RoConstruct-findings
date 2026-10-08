// roc 2007-08 005ed230  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed230
//
// 005ed230  68d8378c00           push 0x8c37d8
// 005ed235  68e0dd5800           push 0x58dde0
// 005ed23a  e8e1821300           call 0x725520
// 005ed23f  83c408               add esp, 8
// 005ed242  e91908faff           jmp 0x58da60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
