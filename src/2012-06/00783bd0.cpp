// roc 2012-06 00783bd0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783bd0
//
// 00783bd0  6860097700           push 0x770960
// 00783bd5  68c885e400           push 0xe485c8
// 00783bda  e8c1d9c7ff           call 0x4015a0
// 00783bdf  83c408               add esp, 8
// 00783be2  e919cdfeff           jmp 0x770900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
