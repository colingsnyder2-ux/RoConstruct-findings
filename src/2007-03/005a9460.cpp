// roc 2007-03 005a9460  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9460
//
// 005a9460  68188f8b00           push 0x8b8f18
// 005a9465  68a0d04900           push 0x49d0a0
// 005a946a  e8e1d31700           call 0x726850
// 005a946f  83c408               add esp, 8
// 005a9472  e9a92cefff           jmp 0x49c120
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
