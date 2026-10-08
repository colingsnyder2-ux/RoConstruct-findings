// roc 2007-03 00558d70  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558d70
//
// 00558d70  684cc28b00           push 0x8bc24c
// 00558d75  68205d5500           push 0x555d20
// 00558d7a  e8d1da1c00           call 0x726850
// 00558d7f  83c408               add esp, 8
// 00558d82  e969bcffff           jmp 0x5549f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
