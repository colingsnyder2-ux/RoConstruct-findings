// roc 2007-03 00530c90  unit: seg_00530000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530c90
//
// 00530c90  68d4538b00           push 0x8b53d4
// 00530c95  68b0344000           push 0x4034b0
// 00530c9a  e8b15b1f00           call 0x726850
// 00530c9f  83c408               add esp, 8
// 00530ca2  e91919edff           jmp 0x4025c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
