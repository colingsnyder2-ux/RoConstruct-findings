// roc 2010-06 00644bc0  unit: RBX::VFileMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644bc0
//
// 00644bc0  68b07c4500           push 0x457cb0
// 00644bc5  68f01dc000           push 0xc01df0
// 00644bca  e8c1cadbff           call 0x401690
// 00644bcf  83c408               add esp, 8
// 00644bd2  e94915e1ff           jmp 0x456120
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
