// roc 2007-03 005dc070  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc070
//
// 005dc070  684cd88b00           push 0x8bd84c
// 005dc075  6850835800           push 0x588350
// 005dc07a  e8d1a71400           call 0x726850
// 005dc07f  83c408               add esp, 8
// 005dc082  e949bffaff           jmp 0x587fd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
