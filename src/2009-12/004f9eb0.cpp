// roc 2009-12 004f9eb0  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f9eb0
//
// 004f9eb0  6820414000           push 0x404120
// 004f9eb5  688c95b700           push 0xb7958c
// 004f9eba  e87177f0ff           call 0x401630
// 004f9ebf  83c408               add esp, 8
// 004f9ec2  e9099bf0ff           jmp 0x4039d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
