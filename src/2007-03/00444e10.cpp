// roc 2007-03 00444e10  unit: seg_00440000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00444e10
//
// 00444e10  68d0548b00           push 0x8b54d0
// 00444e15  6850fd4000           push 0x40fd50
// 00444e1a  e8311a2e00           call 0x726850
// 00444e1f  83c408               add esp, 8
// 00444e22  e979aefcff           jmp 0x40fca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
