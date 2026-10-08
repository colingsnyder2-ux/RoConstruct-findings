// roc 2007-03 0061b960  unit: seg_00610000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061b960
//
// 0061b960  6830138c00           push 0x8c1330
// 0061b965  6810b96100           push 0x61b910
// 0061b96a  e8e1ae1000           call 0x726850
// 0061b96f  83c408               add esp, 8
// 0061b972  e929ffffff           jmp 0x61b8a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
