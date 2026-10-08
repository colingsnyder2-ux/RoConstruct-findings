// roc 2011-06 006fa030  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fa030
//
// 006fa030  6820135c00           push 0x5c1320
// 006fa035  68d4e5cb00           push 0xcbe5d4
// 006fa03a  e8d175d0ff           call 0x401610
// 006fa03f  83c408               add esp, 8
// 006fa042  e9295cecff           jmp 0x5bfc70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
