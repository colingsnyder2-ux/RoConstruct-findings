// roc 2010-06 006b72d0  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b72d0
//
// 006b72d0  68d0c45a00           push 0x5ac4d0
// 006b72d5  68f4c1c000           push 0xc0c1f4
// 006b72da  e8b1a3d4ff           call 0x401690
// 006b72df  83c408               add esp, 8
// 006b72e2  e9993fefff           jmp 0x5ab280
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
