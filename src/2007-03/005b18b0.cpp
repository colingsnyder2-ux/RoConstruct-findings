// roc 2007-03 005b18b0  unit: seg_005b0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b18b0
//
// 005b18b0  68d09e8b00           push 0x8b9ed0
// 005b18b5  68d04d4c00           push 0x4c4dd0
// 005b18ba  e8914f1700           call 0x726850
// 005b18bf  83c408               add esp, 8
// 005b18c2  e9392ef1ff           jmp 0x4c4700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
