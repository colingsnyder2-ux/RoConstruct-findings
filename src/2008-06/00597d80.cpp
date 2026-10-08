// roc 2008-06 00597d80  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597d80
//
// 00597d80  68bcd09600           push 0x96d0bc
// 00597d85  68b0e04100           push 0x41e0b0
// 00597d8a  e8a1f5fbff           call 0x557330
// 00597d8f  83c408               add esp, 8
// 00597d92  e98960e8ff           jmp 0x41de20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
