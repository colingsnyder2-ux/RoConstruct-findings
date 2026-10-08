// roc 2011-06 00690610  unit: RBX::VImageLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00690610
//
// 00690610  68d0584a00           push 0x4a58d0
// 00690615  68dc53cb00           push 0xcb53dc
// 0069061a  e8f10fd7ff           call 0x401610
// 0069061f  83c408               add esp, 8
// 00690622  e9c937e1ff           jmp 0x4a3df0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
