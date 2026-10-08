// roc 2010-06 005b9ee0  unit: RBX::VCylinderMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b9ee0
//
// 005b9ee0  68c0c35a00           push 0x5ac3c0
// 005b9ee5  68b0c1c000           push 0xc0c1b0
// 005b9eea  e8a177e4ff           call 0x401690
// 005b9eef  83c408               add esp, 8
// 005b9ef2  e9190cffff           jmp 0x5aab10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
