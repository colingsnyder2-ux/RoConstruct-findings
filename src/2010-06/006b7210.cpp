// roc 2010-06 006b7210  unit: RBX::VBodyGyro::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b7210
//
// 006b7210  6870c45a00           push 0x5ac470
// 006b7215  68dcc1c000           push 0xc0c1dc
// 006b721a  e871a4d4ff           call 0x401690
// 006b721f  83c408               add esp, 8
// 006b7222  e9b93defff           jmp 0x5aafe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
