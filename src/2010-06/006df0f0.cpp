// roc 2010-06 006df0f0  unit: RBX::VImageLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006df0f0
//
// 006df0f0  6810c65a00           push 0x5ac610
// 006df0f5  6844c2c000           push 0xc0c244
// 006df0fa  e89125d2ff           call 0x401690
// 006df0ff  83c408               add esp, 8
// 006df102  e939caecff           jmp 0x5abb40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
