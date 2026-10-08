// roc 2010-06 00784e30  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00784e30
//
// 00784e30  68104e7800           push 0x784e10
// 00784e35  685c35c200           push 0xc2355c
// 00784e3a  e851c8c7ff           call 0x401690
// 00784e3f  83c408               add esp, 8
// 00784e42  e979feffff           jmp 0x784cc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
