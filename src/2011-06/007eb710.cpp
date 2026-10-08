// roc 2011-06 007eb710  unit: RBX::HUMAN::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eb710
//
// 007eb710  6820b67e00           push 0x7eb620
// 007eb715  68385fcd00           push 0xcd5f38
// 007eb71a  e8f15ec1ff           call 0x401610
// 007eb71f  83c408               add esp, 8
// 007eb722  e989feffff           jmp 0x7eb5b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
