// roc 2010-06 0066e220  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066e220
//
// 0066e220  68104a4a00           push 0x4a4a10
// 0066e225  68683ec000           push 0xc03e68
// 0066e22a  e86134d9ff           call 0x401690
// 0066e22f  83c408               add esp, 8
// 0066e232  e9195be3ff           jmp 0x4a3d50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
