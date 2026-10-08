// roc 2010-06 006bd4b0  unit: RBX::VCharacterMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bd4b0
//
// 006bd4b0  6880c35a00           push 0x5ac380
// 006bd4b5  68a0c1c000           push 0xc0c1a0
// 006bd4ba  e8d141d4ff           call 0x401690
// 006bd4bf  83c408               add esp, 8
// 006bd4c2  e989d4eeff           jmp 0x5aa950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
