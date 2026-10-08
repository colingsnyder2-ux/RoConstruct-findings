// roc 2011-06 006fef80  unit: RBX::VGeometryService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fef80
//
// 006fef80  68a0135c00           push 0x5c13a0
// 006fef85  68f4e5cb00           push 0xcbe5f4
// 006fef8a  e88126d0ff           call 0x401610
// 006fef8f  83c408               add esp, 8
// 006fef92  e95910ecff           jmp 0x5bfff0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
