// roc 2011-06 004a8b40  unit: RBX::Network::VPlayer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a8b40
//
// 004a8b40  68304d4000           push 0x404d30
// 004a8b45  687c16cb00           push 0xcb167c
// 004a8b4a  e8c18af5ff           call 0x401610
// 004a8b4f  83c408               add esp, 8
// 004a8b52  e9e9b9f5ff           jmp 0x404540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
