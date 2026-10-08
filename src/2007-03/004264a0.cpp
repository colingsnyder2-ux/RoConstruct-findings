// roc 2007-03 004264a0  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004264a0
//
// 004264a0  68005a8b00           push 0x8b5a00
// 004264a5  6850234200           push 0x422350
// 004264aa  e8a1033000           call 0x726850
// 004264af  83c408               add esp, 8
// 004264b2  e9d9b5ffff           jmp 0x421a90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
