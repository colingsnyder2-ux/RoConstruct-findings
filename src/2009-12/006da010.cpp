// roc 2009-12 006da010  unit: RBX::VVehicleController::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da010
//
// 006da010  68202d4600           push 0x462d20
// 006da015  68c4b9b700           push 0xb7b9c4
// 006da01a  e81176d2ff           call 0x401630
// 006da01f  83c408               add esp, 8
// 006da022  e9d97cd8ff           jmp 0x461d00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
