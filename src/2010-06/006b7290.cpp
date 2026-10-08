// roc 2010-06 006b7290  unit: RBX::VBodyVelocity::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b7290
//
// 006b7290  68b0c45a00           push 0x5ac4b0
// 006b7295  68ecc1c000           push 0xc0c1ec
// 006b729a  e8f1a3d4ff           call 0x401690
// 006b729f  83c408               add esp, 8
// 006b72a2  e9f93eefff           jmp 0x5ab1a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
