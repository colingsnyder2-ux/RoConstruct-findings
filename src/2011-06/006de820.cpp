// roc 2011-06 006de820  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de820
//
// 006de820  6810e86d00           push 0x6de810
// 006de825  68c41acd00           push 0xcd1ac4
// 006de82a  e8e12dd2ff           call 0x401610
// 006de82f  83c408               add esp, 8
// 006de832  e969ffffff           jmp 0x6de7a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
