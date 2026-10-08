// roc 2011-06 0066a700  unit: RBX::VVehicleController::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066a700
//
// 0066a700  68103b4600           push 0x463b10
// 0066a705  68803bcb00           push 0xcb3b80
// 0066a70a  e8016fd9ff           call 0x401610
// 0066a70f  83c408               add esp, 8
// 0066a712  e9c982dfff           jmp 0x4629e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
