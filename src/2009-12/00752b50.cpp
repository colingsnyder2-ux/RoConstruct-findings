// roc 2009-12 00752b50  unit: RBX::VSelectionBox::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00752b50
//
// 00752b50  68709a6400           push 0x649a70
// 00752b55  683060b800           push 0xb86030
// 00752b5a  e8d1eacaff           call 0x401630
// 00752b5f  83c408               add esp, 8
// 00752b62  e98961efff           jmp 0x648cf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
