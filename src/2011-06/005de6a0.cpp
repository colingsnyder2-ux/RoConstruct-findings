// roc 2011-06 005de6a0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de6a0
//
// 005de6a0  68900f5d00           push 0x5d0f90
// 005de6a5  6864a3cc00           push 0xcca364
// 005de6aa  e8612fe2ff           call 0x401610
// 005de6af  83c408               add esp, 8
// 005de6b2  e97928ffff           jmp 0x5d0f30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
