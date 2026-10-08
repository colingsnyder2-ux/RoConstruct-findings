// roc 2007-03 005a9610  unit: seg_005a0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a9610
//
// 005a9610  68248f8b00           push 0x8b8f24
// 005a9615  68d0d04900           push 0x49d0d0
// 005a961a  e831d21700           call 0x726850
// 005a961f  83c408               add esp, 8
// 005a9622  e9792cefff           jmp 0x49c2a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
