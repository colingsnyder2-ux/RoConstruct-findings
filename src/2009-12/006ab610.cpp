// roc 2009-12 006ab610  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ab610
//
// 006ab610  68c0a44200           push 0x42a4c0
// 006ab615  68fca2b700           push 0xb7a2fc
// 006ab61a  e81160d5ff           call 0x401630
// 006ab61f  83c408               add esp, 8
// 006ab622  e9b9d4d7ff           jmp 0x428ae0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
