// roc 2012-06 00783c90  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783c90
//
// 00783c90  6820d66900           push 0x69d620
// 00783c95  6860d3e200           push 0xe2d360
// 00783c9a  e801d9c7ff           call 0x4015a0
// 00783c9f  83c408               add esp, 8
// 00783ca2  e91999f1ff           jmp 0x69d5c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
