// roc 2009-06 00671e60  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671e60
//
// 00671e60  6860484b00           push 0x4b4860
// 00671e65  68ecd4a300           push 0xa3d4ec
// 00671e6a  e8a1f8d8ff           call 0x401710
// 00671e6f  83c408               add esp, 8
// 00671e72  e9b91ce4ff           jmp 0x4b3b30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
