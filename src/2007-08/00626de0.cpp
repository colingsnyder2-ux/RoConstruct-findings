// roc 2007-08 00626de0  unit: RBX::Jumping  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00626de0
//
// 00626de0  68e8828c00           push 0x8c82e8
// 00626de5  68d06d6200           push 0x626dd0
// 00626dea  e831e70f00           call 0x725520
// 00626def  83c408               add esp, 8
// 00626df2  e969ffffff           jmp 0x626d60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
