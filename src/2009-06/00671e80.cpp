// roc 2009-06 00671e80  unit: RBX::VSpawnerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671e80
//
// 00671e80  6870484b00           push 0x4b4870
// 00671e85  68f0d4a300           push 0xa3d4f0
// 00671e8a  e881f8d8ff           call 0x401710
// 00671e8f  83c408               add esp, 8
// 00671e92  e9091de4ff           jmp 0x4b3ba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
