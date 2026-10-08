// roc 2007-03 005783e0  unit: seg_00570000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005783e0
//
// 005783e0  68b8598b00           push 0x8b59b8
// 005783e5  6870ce4100           push 0x41ce70
// 005783ea  e861e41a00           call 0x726850
// 005783ef  83c408               add esp, 8
// 005783f2  e90949eaff           jmp 0x41cd00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
