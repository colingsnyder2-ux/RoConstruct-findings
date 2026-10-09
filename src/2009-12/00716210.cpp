// roc 2009-12 00716210  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716210
//
// 00716210  68c0885300           push 0x5388c0
// 00716215  68d005b800           push 0xb805d0
// 0071621a  e811b4ceff           call 0x401630
// 0071621f  83c408               add esp, 8
// 00716222  e9e915e2ff           jmp 0x537810
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
