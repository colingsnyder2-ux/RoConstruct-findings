// roc 2009-06 004d7500  unit: RBX::VHint::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d7500
//
// 004d7500  6830654d00           push 0x4d6530
// 004d7505  68cceda300           push 0xa3edcc
// 004d750a  e801a2f2ff           call 0x401710
// 004d750f  83c408               add esp, 8
// 004d7512  e989ecffff           jmp 0x4d61a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
