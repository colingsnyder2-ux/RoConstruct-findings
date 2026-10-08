// roc 2011-06 004ea1d0  unit: RBX::Network::VServer::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ea1d0
//
// 004ea1d0  6880874c00           push 0x4c8780
// 004ea1d5  681465cb00           push 0xcb6514
// 004ea1da  e83174f1ff           call 0x401610
// 004ea1df  83c408               add esp, 8
// 004ea1e2  e939d1fdff           jmp 0x4c7320
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
