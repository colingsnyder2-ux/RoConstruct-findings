// roc 2007-08 005dae90  unit: RBX::VMotorFeature::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dae90
//
// 005dae90  681c238c00           push 0x8c231c
// 005dae95  6840ed5500           push 0x55ed40
// 005dae9a  e881a61400           call 0x725520
// 005dae9f  83c408               add esp, 8
// 005daea2  e98937f8ff           jmp 0x55e630
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
