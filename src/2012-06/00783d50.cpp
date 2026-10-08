// roc 2012-06 00783d50  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783d50
//
// 00783d50  6850994700           push 0x479950
// 00783d55  6820a5e100           push 0xe1a520
// 00783d5a  e841d8c7ff           call 0x4015a0
// 00783d5f  83c408               add esp, 8
// 00783d62  e9895bcfff           jmp 0x4798f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
