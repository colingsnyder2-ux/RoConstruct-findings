// roc 2011-06 00652b10  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00652b10
//
// 00652b10  6800484400           push 0x444800
// 00652b15  684428cb00           push 0xcb2844
// 00652b1a  e8f1eadaff           call 0x401610
// 00652b1f  83c408               add esp, 8
// 00652b22  e99916dfff           jmp 0x4441c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
