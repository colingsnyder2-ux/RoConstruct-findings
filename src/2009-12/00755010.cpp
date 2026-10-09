// roc 2009-12 00755010  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00755010
//
// 00755010  68b09a6400           push 0x649ab0
// 00755015  684060b800           push 0xb86040
// 0075501a  e811c6caff           call 0x401630
// 0075501f  83c408               add esp, 8
// 00755022  e9893eefff           jmp 0x648eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
