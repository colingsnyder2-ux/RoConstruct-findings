// roc 2007-03 0053e530  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e530
//
// 0053e530  68e0538b00           push 0x8b53e0
// 0053e535  68e0344000           push 0x4034e0
// 0053e53a  e811831e00           call 0x726850
// 0053e53f  83c408               add esp, 8
// 0053e542  e9f941ecff           jmp 0x402740
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
