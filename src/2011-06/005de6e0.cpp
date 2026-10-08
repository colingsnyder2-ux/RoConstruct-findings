// roc 2011-06 005de6e0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de6e0
//
// 005de6e0  6830a95a00           push 0x5aa930
// 005de6e5  6824dccb00           push 0xcbdc24
// 005de6ea  e8212fe2ff           call 0x401610
// 005de6ef  83c408               add esp, 8
// 005de6f2  e9d9c1fcff           jmp 0x5aa8d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
