// roc 2010-06 00785490  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785490
//
// 00785490  6850547800           push 0x785450
// 00785495  68cc35c200           push 0xc235cc
// 0078549a  e8f1c1c7ff           call 0x401690
// 0078549f  83c408               add esp, 8
// 007854a2  e939ffffff           jmp 0x7853e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
