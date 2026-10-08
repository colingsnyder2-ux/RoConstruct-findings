// roc 2011-06 00652b50  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652b50
//
// 00652b50  6810484400           push 0x444810
// 00652b55  684828cb00           push 0xcb2848
// 00652b5a  e8b1eadaff           call 0x401610
// 00652b5f  83c408               add esp, 8
// 00652b62  e9c916dfff           jmp 0x444230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
