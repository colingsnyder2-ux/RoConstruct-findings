// roc 2011-06 005de740  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de740
//
// 005de740  68f0135d00           push 0x5d13f0
// 005de745  688ca3cc00           push 0xcca38c
// 005de74a  e8c12ee2ff           call 0x401610
// 005de74f  83c408               add esp, 8
// 005de752  e9392cffff           jmp 0x5d1390
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
