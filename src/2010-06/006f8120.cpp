// roc 2010-06 006f8120  unit: RBX::VGuiBase::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f8120
//
// 006f8120  68d07e6f00           push 0x6f7ed0
// 006f8125  68741ec200           push 0xc21e74
// 006f812a  e86195d0ff           call 0x401690
// 006f812f  83c408               add esp, 8
// 006f8132  e929fdffff           jmp 0x6f7e60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
