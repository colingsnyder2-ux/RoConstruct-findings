// roc 2011-06 007eb730  unit: RBX::HUMAN::RunningSlave  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eb730
//
// 007eb730  68d0b67e00           push 0x7eb6d0
// 007eb735  683c5fcd00           push 0xcd5f3c
// 007eb73a  e8d15ec1ff           call 0x401610
// 007eb73f  83c408               add esp, 8
// 007eb742  e919ffffff           jmp 0x7eb660
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
