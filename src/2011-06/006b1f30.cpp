// roc 2011-06 006b1f30  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b1f30
//
// 006b1f30  68201f6b00           push 0x6b1f20
// 006b1f35  688800cd00           push 0xcd0088
// 006b1f3a  e8d1f6d4ff           call 0x401610
// 006b1f3f  83c408               add esp, 8
// 006b1f42  e969ffffff           jmp 0x6b1eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
