// roc 2011-06 005de620  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de620
//
// 005de620  68d00d5d00           push 0x5d0dd0
// 005de625  6854a3cc00           push 0xcca354
// 005de62a  e8e12fe2ff           call 0x401610
// 005de62f  83c408               add esp, 8
// 005de632  e93927ffff           jmp 0x5d0d70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
