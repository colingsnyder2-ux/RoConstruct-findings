// roc 2012-06 00783eb0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783eb0
//
// 00783eb0  6870137700           push 0x771370
// 00783eb5  682486e400           push 0xe48624
// 00783eba  e8e1d6c7ff           call 0x4015a0
// 00783ebf  83c408               add esp, 8
// 00783ec2  e949d4feff           jmp 0x771310
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
