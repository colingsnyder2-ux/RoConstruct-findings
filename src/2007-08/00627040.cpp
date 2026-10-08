// roc 2007-08 00627040  unit: RBX::GettingUp  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627040
//
// 00627040  68f4828c00           push 0x8c82f4
// 00627045  6830706200           push 0x627030
// 0062704a  e8d1e40f00           call 0x725520
// 0062704f  83c408               add esp, 8
// 00627052  e969ffffff           jmp 0x626fc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
