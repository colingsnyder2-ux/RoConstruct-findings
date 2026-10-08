// roc 2012-06 00783ab0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783ab0
//
// 00783ab0  6810797300           push 0x737910
// 00783ab5  68d844e300           push 0xe344d8
// 00783aba  e8e1dac7ff           call 0x4015a0
// 00783abf  83c408               add esp, 8
// 00783ac2  e9e93dfbff           jmp 0x7378b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
