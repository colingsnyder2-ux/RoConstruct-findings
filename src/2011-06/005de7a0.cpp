// roc 2011-06 005de7a0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de7a0
//
// 005de7a0  68d0145d00           push 0x5d14d0
// 005de7a5  6894a3cc00           push 0xcca394
// 005de7aa  e8612ee2ff           call 0x401610
// 005de7af  83c408               add esp, 8
// 005de7b2  e9b92cffff           jmp 0x5d1470
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
