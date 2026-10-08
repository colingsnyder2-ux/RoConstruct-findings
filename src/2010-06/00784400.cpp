// roc 2010-06 00784400  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00784400
//
// 00784400  6810437800           push 0x784310
// 00784405  680c35c200           push 0xc2350c
// 0078440a  e881d2c7ff           call 0x401690
// 0078440f  83c408               add esp, 8
// 00784412  e989feffff           jmp 0x7842a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
