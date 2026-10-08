// roc 2012-06 007839b0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007839b0
//
// 007839b0  6800c36700           push 0x67c300
// 007839b5  68cc94e200           push 0xe294cc
// 007839ba  e8e1dbc7ff           call 0x4015a0
// 007839bf  83c408               add esp, 8
// 007839c2  e9d988efff           jmp 0x67c2a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
