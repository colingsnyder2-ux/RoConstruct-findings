// roc 2010-06 00631c20  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00631c20
//
// 00631c20  6800e34400           push 0x44e300
// 00631c25  68541ac000           push 0xc01a54
// 00631c2a  e861fadcff           call 0x401690
// 00631c2f  83c408               add esp, 8
// 00631c32  e929b6e1ff           jmp 0x44d260
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
