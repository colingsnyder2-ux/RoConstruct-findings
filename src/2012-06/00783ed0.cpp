// roc 2012-06 00783ed0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783ed0
//
// 00783ed0  68e0137700           push 0x7713e0
// 00783ed5  682886e400           push 0xe48628
// 00783eda  e8c1d6c7ff           call 0x4015a0
// 00783edf  83c408               add esp, 8
// 00783ee2  e999d4feff           jmp 0x771380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
