// roc 2007-03 005a93b0  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a93b0
//
// 005a93b0  68148f8b00           push 0x8b8f14
// 005a93b5  6890d04900           push 0x49d090
// 005a93ba  e891d41700           call 0x726850
// 005a93bf  83c408               add esp, 8
// 005a93c2  e9d92cefff           jmp 0x49c0a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
