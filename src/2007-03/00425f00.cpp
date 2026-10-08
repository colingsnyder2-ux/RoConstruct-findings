// roc 2007-03 00425f00  unit: seg_00420000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00425f00
//
// 00425f00  68f8598b00           push 0x8b59f8
// 00425f05  6830234200           push 0x422330
// 00425f0a  e841093000           call 0x726850
// 00425f0f  83c408               add esp, 8
// 00425f12  e979baffff           jmp 0x421990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
