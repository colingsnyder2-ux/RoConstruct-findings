// roc 2007-03 00539ec0  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539ec0
//
// 00539ec0  68dc538b00           push 0x8b53dc
// 00539ec5  68d0344000           push 0x4034d0
// 00539eca  e881c91e00           call 0x726850
// 00539ecf  83c408               add esp, 8
// 00539ed2  e9e987ecff           jmp 0x4026c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
