// roc 2009-12 0057b0b0  unit: RBX::VBlockMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057b0b0
//
// 0057b0b0  68507c5700           push 0x577c50
// 0057b0b5  687427b800           push 0xb82774
// 0057b0ba  e87165e8ff           call 0x401630
// 0057b0bf  83c408               add esp, 8
// 0057b0c2  e959c7ffff           jmp 0x577820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
