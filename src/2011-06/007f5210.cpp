// roc 2011-06 007f5210  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f5210
//
// 007f5210  68d0517f00           push 0x7f51d0
// 007f5215  684461cd00           push 0xcd6144
// 007f521a  e8f1c3c0ff           call 0x401610
// 007f521f  83c408               add esp, 8
// 007f5222  e939fcffff           jmp 0x7f4e60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
