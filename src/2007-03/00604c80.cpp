// roc 2007-03 00604c80  unit: seg_00600000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604c80
//
// 00604c80  6838108c00           push 0x8c1038
// 00604c85  68e0476000           push 0x6047e0
// 00604c8a  e8c11b1200           call 0x726850
// 00604c8f  83c408               add esp, 8
// 00604c92  e989faffff           jmp 0x604720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
