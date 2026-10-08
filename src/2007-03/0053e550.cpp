// roc 2007-03 0053e550  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053e550
//
// 0053e550  68e4538b00           push 0x8b53e4
// 0053e555  68f0344000           push 0x4034f0
// 0053e55a  e8f1821e00           call 0x726850
// 0053e55f  83c408               add esp, 8
// 0053e562  e95942ecff           jmp 0x4027c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
