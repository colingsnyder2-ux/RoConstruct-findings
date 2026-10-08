// roc 2007-03 00486470  unit: seg_00480000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00486470
//
// 00486470  68b4548b00           push 0x8b54b4
// 00486475  6800e34000           push 0x40e300
// 0048647a  e8d1032a00           call 0x726850
// 0048647f  83c408               add esp, 8
// 00486482  e97979f8ff           jmp 0x40de00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
