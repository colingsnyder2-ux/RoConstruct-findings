// roc 2012-06 00783cf0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783cf0
//
// 00783cf0  6880576900           push 0x695780
// 00783cf5  6880c8e200           push 0xe2c880
// 00783cfa  e8a1d8c7ff           call 0x4015a0
// 00783cff  83c408               add esp, 8
// 00783d02  e9191af1ff           jmp 0x695720
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
