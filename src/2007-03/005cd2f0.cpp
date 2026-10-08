// roc 2007-03 005cd2f0  unit: seg_005c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cd2f0
//
// 005cd2f0  6898c28b00           push 0x8bc298
// 005cd2f5  68505e5500           push 0x555e50
// 005cd2fa  e851951500           call 0x726850
// 005cd2ff  83c408               add esp, 8
// 005cd302  e9397ff8ff           jmp 0x555240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
