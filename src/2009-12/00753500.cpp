// roc 2009-12 00753500  unit: RBX::VTouchTransmitter::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753500
//
// 00753500  68909a6400           push 0x649a90
// 00753505  683860b800           push 0xb86038
// 0075350a  e821e1caff           call 0x401630
// 0075350f  83c408               add esp, 8
// 00753512  e9b958efff           jmp 0x648dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
