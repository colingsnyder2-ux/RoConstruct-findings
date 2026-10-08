// roc 2012-06 00783b70  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783b70
//
// 00783b70  6850c46700           push 0x67c450
// 00783b75  68d894e200           push 0xe294d8
// 00783b7a  e821dac7ff           call 0x4015a0
// 00783b7f  83c408               add esp, 8
// 00783b82  e96988efff           jmp 0x67c3f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
