// roc 2011-06 006960e0  unit: RBX::VConfiguration::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006960e0
//
// 006960e0  6890594a00           push 0x4a5990
// 006960e5  680c54cb00           push 0xcb540c
// 006960ea  e821b5d6ff           call 0x401610
// 006960ef  83c408               add esp, 8
// 006960f2  e939e2e0ff           jmp 0x4a4330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
