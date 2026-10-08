// roc 2011-06 005de7e0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de7e0
//
// 005de7e0  68b0155d00           push 0x5d15b0
// 005de7e5  689ca3cc00           push 0xcca39c
// 005de7ea  e8212ee2ff           call 0x401610
// 005de7ef  83c408               add esp, 8
// 005de7f2  e9592dffff           jmp 0x5d1550
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
