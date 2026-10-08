// roc 2010-06 006b72b0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b72b0
//
// 006b72b0  68c0c45a00           push 0x5ac4c0
// 006b72b5  68f0c1c000           push 0xc0c1f0
// 006b72ba  e8d1a3d4ff           call 0x401690
// 006b72bf  83c408               add esp, 8
// 006b72c2  e9493fefff           jmp 0x5ab210
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
