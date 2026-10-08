// roc 2007-08 005d2b10  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2b10
//
// 005d2b10  68141f8c00           push 0x8c1f14
// 005d2b15  6800875500           push 0x558700
// 005d2b1a  e8012a1500           call 0x725520
// 005d2b1f  83c408               add esp, 8
// 005d2b22  e9c94cf8ff           jmp 0x5577f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
