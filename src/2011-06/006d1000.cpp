// roc 2011-06 006d1000  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d1000
//
// 006d1000  68d0564f00           push 0x4f56d0
// 006d1005  68f082cb00           push 0xcb82f0
// 006d100a  e80106d3ff           call 0x401610
// 006d100f  83c408               add esp, 8
// 006d1012  e94933e2ff           jmp 0x4f4360
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
