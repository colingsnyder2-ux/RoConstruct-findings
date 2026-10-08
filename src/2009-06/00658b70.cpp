// roc 2009-06 00658b70  unit: RBX::VVehicleController::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00658b70
//
// 00658b70  6810b44500           push 0x45b410
// 00658b75  68fcb4a300           push 0xa3b4fc
// 00658b7a  e8918bdaff           call 0x401710
// 00658b7f  83c408               add esp, 8
// 00658b82  e92919e0ff           jmp 0x45a4b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
