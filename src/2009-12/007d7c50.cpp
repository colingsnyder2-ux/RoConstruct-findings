// roc 2009-12 007d7c50  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7c50
//
// 007d7c50  68207c7d00           push 0x7d7c20
// 007d7c55  68bc8eb900           push 0xb98ebc
// 007d7c5a  e8d199c2ff           call 0x401630
// 007d7c5f  83c408               add esp, 8
// 007d7c62  e9b9feffff           jmp 0x7d7b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
