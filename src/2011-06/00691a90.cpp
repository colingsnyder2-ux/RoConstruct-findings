// roc 2011-06 00691a90  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00691a90
//
// 00691a90  68f0584a00           push 0x4a58f0
// 00691a95  68e453cb00           push 0xcb53e4
// 00691a9a  e871fbd6ff           call 0x401610
// 00691a9f  83c408               add esp, 8
// 00691aa2  e92924e1ff           jmp 0x4a3ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
