// roc 2012-06 00783b90  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783b90
//
// 00783b90  6850067700           push 0x770650
// 00783b95  68ac85e400           push 0xe485ac
// 00783b9a  e801dac7ff           call 0x4015a0
// 00783b9f  83c408               add esp, 8
// 00783ba2  e949cafeff           jmp 0x7705f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
