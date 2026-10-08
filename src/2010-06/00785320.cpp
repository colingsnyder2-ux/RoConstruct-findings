// roc 2010-06 00785320  unit: RBX::HUMAN::RunningNoPhysics  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785320
//
// 00785320  6810537800           push 0x785310
// 00785325  68b435c200           push 0xc235b4
// 0078532a  e861c3c7ff           call 0x401690
// 0078532f  83c408               add esp, 8
// 00785332  e969ffffff           jmp 0x7852a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
