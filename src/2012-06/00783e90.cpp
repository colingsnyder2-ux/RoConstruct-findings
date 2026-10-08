// roc 2012-06 00783e90  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783e90
//
// 00783e90  6800137700           push 0x771300
// 00783e95  682086e400           push 0xe48620
// 00783e9a  e801d7c7ff           call 0x4015a0
// 00783e9f  83c408               add esp, 8
// 00783ea2  e9f9d3feff           jmp 0x7712a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
