// roc 2009-12 00756e40  unit: RBX::VScreenGui::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00756e40
//
// 00756e40  68c09a6400           push 0x649ac0
// 00756e45  684460b800           push 0xb86044
// 00756e4a  e8e1a7caff           call 0x401630
// 00756e4f  83c408               add esp, 8
// 00756e52  e9c920efff           jmp 0x648f20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
