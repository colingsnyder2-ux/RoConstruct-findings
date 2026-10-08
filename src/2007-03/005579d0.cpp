// roc 2007-03 005579d0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005579d0
//
// 005579d0  6880c28b00           push 0x8bc280
// 005579d5  68f05d5500           push 0x555df0
// 005579da  e871ee1c00           call 0x726850
// 005579df  83c408               add esp, 8
// 005579e2  e9b9d5ffff           jmp 0x554fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
