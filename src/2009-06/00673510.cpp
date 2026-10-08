// roc 2009-06 00673510  unit: RBX::VShirtGraphic::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673510
//
// 00673510  6880484b00           push 0x4b4880
// 00673515  68f4d4a300           push 0xa3d4f4
// 0067351a  e8f1e1d8ff           call 0x401710
// 0067351f  83c408               add esp, 8
// 00673522  e9e906e4ff           jmp 0x4b3c10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
