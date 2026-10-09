// roc 2009-12 00716250  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716250
//
// 00716250  68e0885300           push 0x5388e0
// 00716255  68d805b800           push 0xb805d8
// 0071625a  e8d1b3ceff           call 0x401630
// 0071625f  83c408               add esp, 8
// 00716262  e98916e2ff           jmp 0x5378f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
