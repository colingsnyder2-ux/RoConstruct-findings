// roc 2009-12 00658420  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00658420
//
// 00658420  68609a6400           push 0x649a60
// 00658425  682c60b800           push 0xb8602c
// 0065842a  e80192daff           call 0x401630
// 0065842f  83c408               add esp, 8
// 00658432  e94908ffff           jmp 0x648c80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
