// roc 2009-06 004b7140  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b7140
//
// 004b7140  6840454000           push 0x404540
// 004b7145  68a497a300           push 0xa397a4
// 004b714a  e8c1a5f4ff           call 0x401710
// 004b714f  83c408               add esp, 8
// 004b7152  e969ccf4ff           jmp 0x403dc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
