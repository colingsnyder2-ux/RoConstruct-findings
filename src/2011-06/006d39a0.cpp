// roc 2011-06 006d39a0  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d39a0
//
// 006d39a0  68f0564f00           push 0x4f56f0
// 006d39a5  68f882cb00           push 0xcb82f8
// 006d39aa  e861dcd2ff           call 0x401610
// 006d39af  83c408               add esp, 8
// 006d39b2  e9890ae2ff           jmp 0x4f4440
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
