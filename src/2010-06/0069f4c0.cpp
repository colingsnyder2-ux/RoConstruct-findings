// roc 2010-06 0069f4c0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069f4c0
//
// 0069f4c0  68b0f46900           push 0x69f4b0
// 0069f4c5  6850eec100           push 0xc1ee50
// 0069f4ca  e8c121d6ff           call 0x401690
// 0069f4cf  83c408               add esp, 8
// 0069f4d2  e969ffffff           jmp 0x69f440
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
