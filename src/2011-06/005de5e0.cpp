// roc 2011-06 005de5e0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de5e0
//
// 005de5e0  68f00c5d00           push 0x5d0cf0
// 005de5e5  684ca3cc00           push 0xcca34c
// 005de5ea  e82130e2ff           call 0x401610
// 005de5ef  83c408               add esp, 8
// 005de5f2  e99926ffff           jmp 0x5d0c90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
