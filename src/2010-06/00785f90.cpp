// roc 2010-06 00785f90  unit: RBX::HUMAN::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785f90
//
// 00785f90  68405f7800           push 0x785f40
// 00785f95  681436c200           push 0xc23614
// 00785f9a  e8f1b6c7ff           call 0x401690
// 00785f9f  83c408               add esp, 8
// 00785fa2  e929ffffff           jmp 0x785ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
