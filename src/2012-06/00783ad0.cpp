// roc 2012-06 00783ad0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783ad0
//
// 00783ad0  6880797300           push 0x737980
// 00783ad5  68dc44e300           push 0xe344dc
// 00783ada  e8c1dac7ff           call 0x4015a0
// 00783adf  83c408               add esp, 8
// 00783ae2  e9393efbff           jmp 0x737920
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
