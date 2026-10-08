// roc 2007-03 005584b0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005584b0
//
// 005584b0  6834c28b00           push 0x8bc234
// 005584b5  68c05c5500           push 0x555cc0
// 005584ba  e891e31c00           call 0x726850
// 005584bf  83c408               add esp, 8
// 005584c2  e989c2ffff           jmp 0x554750
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
