// roc 2009-12 00716230  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716230
//
// 00716230  68d0885300           push 0x5388d0
// 00716235  68d405b800           push 0xb805d4
// 0071623a  e8f1b3ceff           call 0x401630
// 0071623f  83c408               add esp, 8
// 00716242  e93916e2ff           jmp 0x537880
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
