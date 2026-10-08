// roc 2010-06 00785c80  unit: RBX::HUMAN::Freefall  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785c80
//
// 00785c80  6840587800           push 0x785840
// 00785c85  68e435c200           push 0xc235e4
// 00785c8a  e801bac7ff           call 0x401690
// 00785c8f  83c408               add esp, 8
// 00785c92  e919f8ffff           jmp 0x7854b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
