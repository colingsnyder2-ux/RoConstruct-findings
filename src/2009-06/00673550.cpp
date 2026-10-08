// roc 2009-06 00673550  unit: RBX::VBodyColors::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00673550
//
// 00673550  68b0484b00           push 0x4b48b0
// 00673555  6800d5a300           push 0xa3d500
// 0067355a  e8b1e1d8ff           call 0x401710
// 0067355f  83c408               add esp, 8
// 00673562  e9f907e4ff           jmp 0x4b3d60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
