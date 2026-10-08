// roc 2011-06 00693440  unit: RBX::VShirt::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00693440
//
// 00693440  6830594a00           push 0x4a5930
// 00693445  68f453cb00           push 0xcb53f4
// 0069344a  e8c1e1d6ff           call 0x401610
// 0069344f  83c408               add esp, 8
// 00693452  e9390ce1ff           jmp 0x4a4090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
