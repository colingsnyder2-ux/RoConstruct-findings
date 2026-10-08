// roc 2010-06 0064fa00  unit: RBX::VVehicleController::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064fa00
//
// 0064fa00  68607d4600           push 0x467d60
// 0064fa05  68b81fc000           push 0xc01fb8
// 0064fa0a  e8811cdbff           call 0x401690
// 0064fa0f  83c408               add esp, 8
// 0064fa12  e97976e1ff           jmp 0x467090
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
