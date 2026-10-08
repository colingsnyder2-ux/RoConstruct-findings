// roc 2009-06 006991a0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006991a0
//
// 006991a0  68f0a05e00           push 0x5ea0f0
// 006991a5  688849a400           push 0xa44988
// 006991aa  e86185d6ff           call 0x401710
// 006991af  83c408               add esp, 8
// 006991b2  e97901f5ff           jmp 0x5e9330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
