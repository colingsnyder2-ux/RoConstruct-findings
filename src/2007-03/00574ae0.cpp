// roc 2007-03 00574ae0  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574ae0
//
// 00574ae0  68b4598b00           push 0x8b59b4
// 00574ae5  6860ce4100           push 0x41ce60
// 00574aea  e8611d1b00           call 0x726850
// 00574aef  83c408               add esp, 8
// 00574af2  e98981eaff           jmp 0x41cc80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
