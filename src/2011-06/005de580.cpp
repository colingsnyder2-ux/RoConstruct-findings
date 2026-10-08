// roc 2011-06 005de580  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de580
//
// 005de580  68a0fe5800           push 0x58fea0
// 005de585  68a4adcb00           push 0xcbada4
// 005de58a  e88130e2ff           call 0x401610
// 005de58f  83c408               add esp, 8
// 005de592  e9a918fbff           jmp 0x58fe40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
