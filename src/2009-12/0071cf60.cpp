// roc 2009-12 0071cf60  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071cf60
//
// 0071cf60  6850cf7100           push 0x71cf50
// 0071cf65  68e859b900           push 0xb959e8
// 0071cf6a  e8c146ceff           call 0x401630
// 0071cf6f  83c408               add esp, 8
// 0071cf72  e969ffffff           jmp 0x71cee0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
