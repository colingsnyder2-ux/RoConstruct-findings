// roc 2009-06 005d85d0  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d85d0
//
// 005d85d0  6830454000           push 0x404530
// 005d85d5  68a097a300           push 0xa397a0
// 005d85da  e83191e2ff           call 0x401710
// 005d85df  83c408               add esp, 8
// 005d85e2  e969b7e2ff           jmp 0x403d50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
