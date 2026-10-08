// roc 2011-06 005af2a0  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005af2a0
//
// 005af2a0  68404d4000           push 0x404d40
// 005af2a5  688016cb00           push 0xcb1680
// 005af2aa  e86123e5ff           call 0x401610
// 005af2af  83c408               add esp, 8
// 005af2b2  e9f952e5ff           jmp 0x4045b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
