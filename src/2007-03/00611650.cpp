// roc 2007-03 00611650  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00611650
//
// 00611650  68f8128c00           push 0x8c12f8
// 00611655  6840166100           push 0x611640
// 0061165a  e8f1511100           call 0x726850
// 0061165f  83c408               add esp, 8
// 00611662  e969ffffff           jmp 0x6115d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
