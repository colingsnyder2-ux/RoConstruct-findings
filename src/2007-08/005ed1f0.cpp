// roc 2007-08 005ed1f0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed1f0
//
// 005ed1f0  68d0378c00           push 0x8c37d0
// 005ed1f5  68c0dd5800           push 0x58ddc0
// 005ed1fa  e821831300           call 0x725520
// 005ed1ff  83c408               add esp, 8
// 005ed202  e97907faff           jmp 0x58d980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
