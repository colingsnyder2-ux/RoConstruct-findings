// roc 2009-12 0065bc80  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065bc80
//
// 0065bc80  68a09b6400           push 0x649ba0
// 0065bc85  687c60b800           push 0xb8607c
// 0065bc8a  e8a159daff           call 0x401630
// 0065bc8f  83c408               add esp, 8
// 0065bc92  e9a9d8feff           jmp 0x649540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
