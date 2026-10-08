// roc 2011-06 005de4a0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de4a0
//
// 005de4a0  68f00d5900           push 0x590df0
// 005de4a5  68fcb0cb00           push 0xcbb0fc
// 005de4aa  e86131e2ff           call 0x401610
// 005de4af  83c408               add esp, 8
// 005de4b2  e9d928fbff           jmp 0x590d90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
