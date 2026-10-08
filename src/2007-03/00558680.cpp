// roc 2007-03 00558680  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00558680
//
// 00558680  6838c28b00           push 0x8bc238
// 00558685  68d05c5500           push 0x555cd0
// 0055868a  e8c1e11c00           call 0x726850
// 0055868f  83c408               add esp, 8
// 00558692  e929c1ffff           jmp 0x5547c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
