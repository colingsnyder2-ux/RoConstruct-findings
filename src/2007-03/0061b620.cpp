// roc 2007-03 0061b620  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b620
//
// 0061b620  6824138c00           push 0x8c1324
// 0061b625  6810b66100           push 0x61b610
// 0061b62a  e821b21000           call 0x726850
// 0061b62f  83c408               add esp, 8
// 0061b632  e969ffffff           jmp 0x61b5a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
