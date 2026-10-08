// roc 2011-06 00678a40  unit: RBX::VFileMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00678a40
//
// 00678a40  6850164700           push 0x471650
// 00678a45  68643ecb00           push 0xcb3e64
// 00678a4a  e8c18bd8ff           call 0x401610
// 00678a4f  83c408               add esp, 8
// 00678a52  e9e96edfff           jmp 0x46f940
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
