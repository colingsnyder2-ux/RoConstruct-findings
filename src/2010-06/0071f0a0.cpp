// roc 2010-06 0071f0a0  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0071f0a0
//
// 0071f0a0  6840e77100           push 0x71e740
// 0071f0a5  68e429c200           push 0xc229e4
// 0071f0aa  e8e125ceff           call 0x401690
// 0071f0af  83c408               add esp, 8
// 0071f0b2  e999f4ffff           jmp 0x71e550
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
