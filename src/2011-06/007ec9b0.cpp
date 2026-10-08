// roc 2011-06 007ec9b0  unit: RBX::HUMAN::Flying  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ec9b0
//
// 007ec9b0  6870c97e00           push 0x7ec970
// 007ec9b5  68f85fcd00           push 0xcd5ff8
// 007ec9ba  e8514cc1ff           call 0x401610
// 007ec9bf  83c408               add esp, 8
// 007ec9c2  e939ffffff           jmp 0x7ec900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
