// roc 2009-12 00659600  unit: RBX::VObjectValue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00659600
//
// 00659600  68a09a6400           push 0x649aa0
// 00659605  683c60b800           push 0xb8603c
// 0065960a  e82180daff           call 0x401630
// 0065960f  83c408               add esp, 8
// 00659612  e929f8feff           jmp 0x648e40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
