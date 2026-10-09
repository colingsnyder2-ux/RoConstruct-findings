// roc 2009-12 00758510  unit: RBX::VImageLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00758510
//
// 00758510  68009b6400           push 0x649b00
// 00758515  685460b800           push 0xb86054
// 0075851a  e81191caff           call 0x401630
// 0075851f  83c408               add esp, 8
// 00758522  e9b90befff           jmp 0x6490e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
