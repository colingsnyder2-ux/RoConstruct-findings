// roc 2011-06 005de5c0  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de5c0
//
// 005de5c0  68e0095d00           push 0x5d09e0
// 005de5c5  6830a3cc00           push 0xcca330
// 005de5ca  e84130e2ff           call 0x401610
// 005de5cf  83c408               add esp, 8
// 005de5d2  e9a923ffff           jmp 0x5d0980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
