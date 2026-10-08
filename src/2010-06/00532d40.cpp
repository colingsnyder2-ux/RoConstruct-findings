// roc 2010-06 00532d40  unit: RBX::VBlockMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00532d40
//
// 00532d40  68c0cd5200           push 0x52cdc0
// 00532d45  68f88bc000           push 0xc08bf8
// 00532d4a  e841e9ecff           call 0x401690
// 00532d4f  83c408               add esp, 8
// 00532d52  e93994ffff           jmp 0x52c190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
