// roc 2009-12 00525940  unit: RBX::Network::VClient::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00525940
//
// 00525940  6850684f00           push 0x4f6850
// 00525945  6848deb700           push 0xb7de48
// 0052594a  e8e1bcedff           call 0x401630
// 0052594f  83c408               add esp, 8
// 00525952  e9e9fcfcff           jmp 0x4f5640
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
