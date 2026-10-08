// roc 2007-03 00543290  unit: seg_00540000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00543290
//
// 00543290  6850548b00           push 0x8b5450
// 00543295  68a08e4000           push 0x408ea0
// 0054329a  e8b1351e00           call 0x726850
// 0054329f  83c408               add esp, 8
// 005432a2  e9e951ecff           jmp 0x408490
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
