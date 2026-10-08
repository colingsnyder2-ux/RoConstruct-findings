// roc 2007-08 00602640  unit: RBX::Running  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602640
//
// 00602640  68dc7f8c00           push 0x8c7fdc
// 00602645  6820266000           push 0x602620
// 0060264a  e8d12e1200           call 0x725520
// 0060264f  83c408               add esp, 8
// 00602652  e959ffffff           jmp 0x6025b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
