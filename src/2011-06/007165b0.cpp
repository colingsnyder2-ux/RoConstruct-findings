// roc 2011-06 007165b0  unit: RBX::VVehicleSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007165b0
//
// 007165b0  68e0145c00           push 0x5c14e0
// 007165b5  6844e6cb00           push 0xcbe644
// 007165ba  e851b0ceff           call 0x401610
// 007165bf  83c408               add esp, 8
// 007165c2  e9e9a2eaff           jmp 0x5c08b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
