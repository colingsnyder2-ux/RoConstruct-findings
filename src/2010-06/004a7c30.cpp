// roc 2010-06 004a7c30  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a7c30
//
// 004a7c30  6850414000           push 0x404150
// 004a7c35  683cfbbf00           push 0xbffb3c
// 004a7c3a  e8519af5ff           call 0x401690
// 004a7c3f  83c408               add esp, 8
// 004a7c42  e999bdf5ff           jmp 0x4039e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
