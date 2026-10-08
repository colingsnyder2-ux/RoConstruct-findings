// roc 2011-06 005de4c0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de4c0
//
// 005de4c0  68100d5900           push 0x590d10
// 005de4c5  68f4b0cb00           push 0xcbb0f4
// 005de4ca  e84131e2ff           call 0x401610
// 005de4cf  83c408               add esp, 8
// 005de4d2  e9d927fbff           jmp 0x590cb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
