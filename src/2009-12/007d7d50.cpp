// roc 2009-12 007d7d50  unit: RBX::HUMAN::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7d50
//
// 007d7d50  68407d7d00           push 0x7d7d40
// 007d7d55  68d48eb900           push 0xb98ed4
// 007d7d5a  e8d198c2ff           call 0x401630
// 007d7d5f  83c408               add esp, 8
// 007d7d62  e909ffffff           jmp 0x7d7c70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
