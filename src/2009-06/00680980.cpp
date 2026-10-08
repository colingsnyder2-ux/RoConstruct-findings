// roc 2009-06 00680980  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680980
//
// 00680980  6870096800           push 0x680970
// 00680985  68c0e5a400           push 0xa4e5c0
// 0068098a  e8810dd8ff           call 0x401710
// 0068098f  83c408               add esp, 8
// 00680992  e969ffffff           jmp 0x680900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
