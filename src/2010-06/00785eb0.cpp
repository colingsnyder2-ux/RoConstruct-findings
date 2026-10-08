// roc 2010-06 00785eb0  unit: RBX::HUMAN::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00785eb0
//
// 00785eb0  68105d7800           push 0x785d10
// 00785eb5  68fc35c200           push 0xc235fc
// 00785eba  e8d1b7c7ff           call 0x401690
// 00785ebf  83c408               add esp, 8
// 00785ec2  e9d9fdffff           jmp 0x785ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
