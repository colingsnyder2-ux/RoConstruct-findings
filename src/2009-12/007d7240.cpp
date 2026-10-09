// roc 2009-12 007d7240  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d7240
//
// 007d7240  6820717d00           push 0x7d7120
// 007d7245  68688eb900           push 0xb98e68
// 007d724a  e8e1a3c2ff           call 0x401630
// 007d724f  83c408               add esp, 8
// 007d7252  e959feffff           jmp 0x7d70b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
