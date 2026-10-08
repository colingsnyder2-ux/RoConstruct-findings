// roc 2007-08 005b05a0  unit: RBX::AutoJoint  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b05a0
//
// 005b05a0  68d85d8c00           push 0x8c5dd8
// 005b05a5  6890055b00           push 0x5b0590
// 005b05aa  e8714f1700           call 0x725520
// 005b05af  83c408               add esp, 8
// 005b05b2  e9f9feffff           jmp 0x5b04b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
