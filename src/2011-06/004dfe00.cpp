// roc 2011-06 004dfe00  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dfe00
//
// 004dfe00  6870584a00           push 0x4a5870
// 004dfe05  68c453cb00           push 0xcb53c4
// 004dfe0a  e80118f2ff           call 0x401610
// 004dfe0f  83c408               add esp, 8
// 004dfe12  e9393dfcff           jmp 0x4a3b50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
