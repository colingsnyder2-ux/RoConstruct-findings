// roc 2009-12 006dfc50  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dfc50
//
// 006dfc50  68802d4600           push 0x462d80
// 006dfc55  68dcb9b700           push 0xb7b9dc
// 006dfc5a  e8d119d2ff           call 0x401630
// 006dfc5f  83c408               add esp, 8
// 006dfc62  e93923d8ff           jmp 0x461fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
