// roc 2007-08 005ed1b0  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed1b0
//
// 005ed1b0  68c8378c00           push 0x8c37c8
// 005ed1b5  68a0dd5800           push 0x58dda0
// 005ed1ba  e861831300           call 0x725520
// 005ed1bf  83c408               add esp, 8
// 005ed1c2  e9d906faff           jmp 0x58d8a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
