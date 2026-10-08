// roc 2011-06 005de500  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de500
//
// 005de500  6880055d00           push 0x5d0580
// 005de505  6808a3cc00           push 0xcca308
// 005de50a  e80131e2ff           call 0x401610
// 005de50f  83c408               add esp, 8
// 005de512  e90920ffff           jmp 0x5d0520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
