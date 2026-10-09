// roc 2009-12 0075a570  unit: RBX::VTextLabel::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075a570
//
// 0075a570  68209b6400           push 0x649b20
// 0075a575  685c60b800           push 0xb8605c
// 0075a57a  e8b170caff           call 0x401630
// 0075a57f  83c408               add esp, 8
// 0075a582  e939eceeff           jmp 0x6491c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
