// roc 2012-06 00783ef0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783ef0
//
// 00783ef0  6850147700           push 0x771450
// 00783ef5  682c86e400           push 0xe4862c
// 00783efa  e8a1d6c7ff           call 0x4015a0
// 00783eff  83c408               add esp, 8
// 00783f02  e9e9d4feff           jmp 0x7713f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
