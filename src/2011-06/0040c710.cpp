// roc 2011-06 0040c710  unit: VAuthoringSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040c710
//
// 0040c710  6840b24000           push 0x40b240
// 0040c715  687417cb00           push 0xcb1774
// 0040c71a  e8f14effff           call 0x401610
// 0040c71f  83c408               add esp, 8
// 0040c722  e9b9e1ffff           jmp 0x40a8e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
