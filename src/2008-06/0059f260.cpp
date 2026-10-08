// roc 2008-06 0059f260  unit: RBX::VSpecialShape::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059f260
//
// 0059f260  68c8d09600           push 0x96d0c8
// 0059f265  68e0e04100           push 0x41e0e0
// 0059f26a  e8c180fbff           call 0x557330
// 0059f26f  83c408               add esp, 8
// 0059f272  e9f9ece7ff           jmp 0x41df70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
