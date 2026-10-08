// roc 2007-03 005dc090  unit: seg_005d0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dc090
//
// 005dc090  6850d88b00           push 0x8bd850
// 005dc095  6860835800           push 0x588360
// 005dc09a  e8b1a71400           call 0x726850
// 005dc09f  83c408               add esp, 8
// 005dc0a2  e999bffaff           jmp 0x588040
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
