// roc 2007-03 00557990  unit: seg_00550000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00557990
//
// 00557990  6870c28b00           push 0x8bc270
// 00557995  68b05d5500           push 0x555db0
// 0055799a  e8b1ee1c00           call 0x726850
// 0055799f  83c408               add esp, 8
// 005579a2  e939d4ffff           jmp 0x554de0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
