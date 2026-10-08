// roc 2011-06 006d5a00  unit: RBX::VMotor6D::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d5a00
//
// 006d5a00  6880574f00           push 0x4f5780
// 006d5a05  681c83cb00           push 0xcb831c
// 006d5a0a  e801bcd2ff           call 0x401610
// 006d5a0f  83c408               add esp, 8
// 006d5a12  e919eee1ff           jmp 0x4f4830
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
