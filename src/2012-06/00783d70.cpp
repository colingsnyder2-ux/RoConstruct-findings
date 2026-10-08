// roc 2012-06 00783d70  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783d70
//
// 00783d70  68c0c46700           push 0x67c4c0
// 00783d75  68dc94e200           push 0xe294dc
// 00783d7a  e821d8c7ff           call 0x4015a0
// 00783d7f  83c408               add esp, 8
// 00783d82  e9d986efff           jmp 0x67c460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
