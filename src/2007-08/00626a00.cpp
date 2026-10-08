// roc 2007-08 00626a00  unit: RBX::Seated  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626a00
//
// 00626a00  68dc828c00           push 0x8c82dc
// 00626a05  68f0696200           push 0x6269f0
// 00626a0a  e811eb0f00           call 0x725520
// 00626a0f  83c408               add esp, 8
// 00626a12  e969ffffff           jmp 0x626980
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
