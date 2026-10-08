// roc 2011-06 0070c810  unit: RBX::VSelectionBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0070c810
//
// 0070c810  6860145c00           push 0x5c1460
// 0070c815  6824e6cb00           push 0xcbe624
// 0070c81a  e8f14dcfff           call 0x401610
// 0070c81f  83c408               add esp, 8
// 0070c822  e9093debff           jmp 0x5c0530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
