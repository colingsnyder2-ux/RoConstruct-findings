// roc 2012-06 007839d0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007839d0
//
// 007839d0  6840037700           push 0x770340
// 007839d5  689085e400           push 0xe48590
// 007839da  e8c1dbc7ff           call 0x4015a0
// 007839df  83c408               add esp, 8
// 007839e2  e9f9c8feff           jmp 0x7702e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
