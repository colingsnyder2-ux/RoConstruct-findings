// roc 2007-03 00442e50  unit: seg_00440000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00442e50
//
// 00442e50  68f4598b00           push 0x8b59f4
// 00442e55  6820234200           push 0x422320
// 00442e5a  e8f1392e00           call 0x726850
// 00442e5f  83c408               add esp, 8
// 00442e62  e9a9eafdff           jmp 0x421910
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
