// roc 2007-03 0054a0b0  unit: seg_00540000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a0b0
//
// 0054a0b0  68b4be8b00           push 0x8bbeb4
// 0054a0b5  68a0a05400           push 0x54a0a0
// 0054a0ba  e891c71d00           call 0x726850
// 0054a0bf  83c408               add esp, 8
// 0054a0c2  e919ffffff           jmp 0x549fe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
