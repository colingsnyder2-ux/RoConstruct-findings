// roc 2009-12 007d7260  unit: RBX::HUMAN::RunningSlave  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7260
//
// 007d7260  6800727d00           push 0x7d7200
// 007d7265  686c8eb900           push 0xb98e6c
// 007d726a  e8c1a3c2ff           call 0x401630
// 007d726f  83c408               add esp, 8
// 007d7272  e919ffffff           jmp 0x7d7190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
