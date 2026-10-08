// roc 2012-06 00783b30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783b30
//
// 00783b30  6870057700           push 0x770570
// 00783b35  68a485e400           push 0xe485a4
// 00783b3a  e861dac7ff           call 0x4015a0
// 00783b3f  83c408               add esp, 8
// 00783b42  e9c9c9feff           jmp 0x770510
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
