// roc 2007-03 005579b0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005579b0
//
// 005579b0  6874c28b00           push 0x8bc274
// 005579b5  68c05d5500           push 0x555dc0
// 005579ba  e891ee1c00           call 0x726850
// 005579bf  83c408               add esp, 8
// 005579c2  e989d4ffff           jmp 0x554e50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
