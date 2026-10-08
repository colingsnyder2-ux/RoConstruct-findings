// roc 2012-06 00783b10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783b10
//
// 00783b10  6880965200           push 0x529680
// 00783b15  68e0e9e100           push 0xe1e9e0
// 00783b1a  e881dac7ff           call 0x4015a0
// 00783b1f  83c408               add esp, 8
// 00783b22  e9f95adaff           jmp 0x529620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
