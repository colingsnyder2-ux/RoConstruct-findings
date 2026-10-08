// roc 2010-06 006c5240  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c5240
//
// 006c5240  6840c45a00           push 0x5ac440
// 006c5245  68d0c1c000           push 0xc0c1d0
// 006c524a  e841c4d3ff           call 0x401690
// 006c524f  83c408               add esp, 8
// 006c5252  e9395ceeff           jmp 0x5aae90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
