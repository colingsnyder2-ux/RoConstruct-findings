// roc 2007-03 00416dd0  unit: seg_00410000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00416dd0
//
// 00416dd0  684c578b00           push 0x8b574c
// 00416dd5  6830524100           push 0x415230
// 00416dda  e871fa3000           call 0x726850
// 00416ddf  83c408               add esp, 8
// 00416de2  e929dbffff           jmp 0x414910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
