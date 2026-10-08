// roc 2010-06 00784e50  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00784e50
//
// 00784e50  68204e7800           push 0x784e20
// 00784e55  686035c200           push 0xc23560
// 00784e5a  e831c8c7ff           call 0x401690
// 00784e5f  83c408               add esp, 8
// 00784e62  e9c9feffff           jmp 0x784d30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
