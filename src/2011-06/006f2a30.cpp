// roc 2011-06 006f2a30  unit: RBX::VVirtualUser::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006f2a30
//
// 006f2a30  68a0125c00           push 0x5c12a0
// 006f2a35  68b4e5cb00           push 0xcbe5b4
// 006f2a3a  e8d1ebd0ff           call 0x401610
// 006f2a3f  83c408               add esp, 8
// 006f2a42  e9a9ceecff           jmp 0x5bf8f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
