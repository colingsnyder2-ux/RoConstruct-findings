// roc 2009-12 006df550  unit: RBX::VFileMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006df550
//
// 006df550  68702d4600           push 0x462d70
// 006df555  68d8b9b700           push 0xb7b9d8
// 006df55a  e8d120d2ff           call 0x401630
// 006df55f  83c408               add esp, 8
// 006df562  e9c929d8ff           jmp 0x461f30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
