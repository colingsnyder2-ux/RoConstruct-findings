// roc 2011-06 005de520  unit: RBX::VSeat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005de520
//
// 005de520  68f0055d00           push 0x5d05f0
// 005de525  680ca3cc00           push 0xcca30c
// 005de52a  e8e130e2ff           call 0x401610
// 005de52f  83c408               add esp, 8
// 005de532  e95920ffff           jmp 0x5d0590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
