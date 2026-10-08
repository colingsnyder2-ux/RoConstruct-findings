// roc 2011-06 007ec350  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec350
//
// 007ec350  6820c37e00           push 0x7ec320
// 007ec355  688c5fcd00           push 0xcd5f8c
// 007ec35a  e8b152c1ff           call 0x401610
// 007ec35f  83c408               add esp, 8
// 007ec362  e9c9feffff           jmp 0x7ec230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
