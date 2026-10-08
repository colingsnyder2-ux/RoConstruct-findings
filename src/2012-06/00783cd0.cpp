// roc 2012-06 00783cd0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783cd0
//
// 00783cd0  68300e7700           push 0x770e30
// 00783cd5  68f485e400           push 0xe485f4
// 00783cda  e8c1d8c7ff           call 0x4015a0
// 00783cdf  83c408               add esp, 8
// 00783ce2  e9e9d0feff           jmp 0x770dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
