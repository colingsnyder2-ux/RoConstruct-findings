// roc 2009-12 00750030  unit: RBX::VLocalBackpack::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00750030
//
// 00750030  68509a6400           push 0x649a50
// 00750035  682860b800           push 0xb86028
// 0075003a  e8f115cbff           call 0x401630
// 0075003f  83c408               add esp, 8
// 00750042  e9c98befff           jmp 0x648c10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
