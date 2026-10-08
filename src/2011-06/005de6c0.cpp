// roc 2011-06 005de6c0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de6c0
//
// 005de6c0  68c0a85a00           push 0x5aa8c0
// 005de6c5  6820dccb00           push 0xcbdc20
// 005de6ca  e8412fe2ff           call 0x401610
// 005de6cf  83c408               add esp, 8
// 005de6d2  e989c1fcff           jmp 0x5aa860
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
