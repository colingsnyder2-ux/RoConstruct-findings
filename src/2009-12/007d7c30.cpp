// roc 2009-12 007d7c30  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7c30
//
// 007d7c30  68107c7d00           push 0x7d7c10
// 007d7c35  68b88eb900           push 0xb98eb8
// 007d7c3a  e8f199c2ff           call 0x401630
// 007d7c3f  83c408               add esp, 8
// 007d7c42  e969feffff           jmp 0x7d7ab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
