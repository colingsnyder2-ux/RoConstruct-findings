// roc 2007-03 005b0df0  unit: seg_005b0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0df0
//
// 005b0df0  68a09e8b00           push 0x8b9ea0
// 005b0df5  6830244c00           push 0x4c2430
// 005b0dfa  e8515a1700           call 0x726850
// 005b0dff  83c408               add esp, 8
// 005b0e02  e9c913f1ff           jmp 0x4c21d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
