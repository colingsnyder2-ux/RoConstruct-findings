// roc 2011-06 005de4e0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de4e0
//
// 005de4e0  6830045d00           push 0x5d0430
// 005de4e5  68fca2cc00           push 0xcca2fc
// 005de4ea  e82131e2ff           call 0x401610
// 005de4ef  83c408               add esp, 8
// 005de4f2  e9d91effff           jmp 0x5d03d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
