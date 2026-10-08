// roc 2012-06 00948160  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00948160
//
// 00948160  68d0458a00           push 0x8a45d0
// 00948165  68982fe500           push 0xe52f98
// 0094816a  e83194abff           call 0x4015a0
// 0094816f  83c408               add esp, 8
// 00948172  e979bff5ff           jmp 0x8a40f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
