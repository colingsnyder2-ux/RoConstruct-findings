// roc 2007-03 00535310  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00535310
//
// 00535310  68d8538b00           push 0x8b53d8
// 00535315  68c0344000           push 0x4034c0
// 0053531a  e831151f00           call 0x726850
// 0053531f  83c408               add esp, 8
// 00535322  e919d3ecff           jmp 0x402640
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
