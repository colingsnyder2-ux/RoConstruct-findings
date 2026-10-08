// roc 2010-06 0064f9b0  unit: RBX::VHumanoidController::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064f9b0
//
// 0064f9b0  68507d4600           push 0x467d50
// 0064f9b5  68b41fc000           push 0xc01fb4
// 0064f9ba  e8d11cdbff           call 0x401690
// 0064f9bf  83c408               add esp, 8
// 0064f9c2  e95976e1ff           jmp 0x467020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
