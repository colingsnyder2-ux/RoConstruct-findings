// roc 2007-08 005b0610  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0610
//
// 005b0610  6860e98b00           push 0x8be960
// 005b0615  6850714a00           push 0x4a7150
// 005b061a  e8014f1700           call 0x725520
// 005b061f  83c408               add esp, 8
// 005b0622  e9c951efff           jmp 0x4a57f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
