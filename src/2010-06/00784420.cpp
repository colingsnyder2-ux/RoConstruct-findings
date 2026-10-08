// roc 2010-06 00784420  unit: RBX::HUMAN::RunningSlave  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00784420
//
// 00784420  68c0437800           push 0x7843c0
// 00784425  681035c200           push 0xc23510
// 0078442a  e861d2c7ff           call 0x401690
// 0078442f  83c408               add esp, 8
// 00784432  e919ffffff           jmp 0x784350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
