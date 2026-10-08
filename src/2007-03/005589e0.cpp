// roc 2007-03 005589e0  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005589e0
//
// 005589e0  6840c28b00           push 0x8bc240
// 005589e5  68f05c5500           push 0x555cf0
// 005589ea  e861de1c00           call 0x726850
// 005589ef  83c408               add esp, 8
// 005589f2  e9a9beffff           jmp 0x5548a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
