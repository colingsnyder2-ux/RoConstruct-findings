// roc 2011-06 005de7c0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de7c0
//
// 005de7c0  6840155d00           push 0x5d1540
// 005de7c5  6898a3cc00           push 0xcca398
// 005de7ca  e8412ee2ff           call 0x401610
// 005de7cf  83c408               add esp, 8
// 005de7d2  e9092dffff           jmp 0x5d14e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
