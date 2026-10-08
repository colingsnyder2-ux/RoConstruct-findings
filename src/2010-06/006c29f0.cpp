// roc 2010-06 006c29f0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c29f0
//
// 006c29f0  68f0c35a00           push 0x5ac3f0
// 006c29f5  68bcc1c000           push 0xc0c1bc
// 006c29fa  e891ecd3ff           call 0x401690
// 006c29ff  83c408               add esp, 8
// 006c2a02  e95982eeff           jmp 0x5aac60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
