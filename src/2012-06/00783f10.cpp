// roc 2012-06 00783f10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783f10
//
// 00783f10  68c0147700           push 0x7714c0
// 00783f15  683086e400           push 0xe48630
// 00783f1a  e881d6c7ff           call 0x4015a0
// 00783f1f  83c408               add esp, 8
// 00783f22  e939d5feff           jmp 0x771460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
