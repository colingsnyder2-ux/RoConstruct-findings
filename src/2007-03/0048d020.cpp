// roc 2007-03 0048d020  unit: seg_00480000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048d020
//
// 0048d020  68b8548b00           push 0x8b54b8
// 0048d025  6810e34000           push 0x40e310
// 0048d02a  e821982900           call 0x726850
// 0048d02f  83c408               add esp, 8
// 0048d032  e9490ef8ff           jmp 0x40de80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
