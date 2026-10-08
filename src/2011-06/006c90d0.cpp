// roc 2011-06 006c90d0  unit: RBX::VTextLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c90d0
//
// 006c90d0  6870484e00           push 0x4e4870
// 006c90d5  68e07dcb00           push 0xcb7de0
// 006c90da  e83185d3ff           call 0x401610
// 006c90df  83c408               add esp, 8
// 006c90e2  e9a9b4e1ff           jmp 0x4e4590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
