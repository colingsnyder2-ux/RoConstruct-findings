// roc 2012-06 00821eb0  unit: RBX::VDataModelMesh::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00821eb0
//
// 00821eb0  68a01e8200           push 0x821ea0
// 00821eb5  683809e500           push 0xe50938
// 00821eba  e8e1f6bdff           call 0x4015a0
// 00821ebf  83c408               add esp, 8
// 00821ec2  e969ffffff           jmp 0x821e30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
