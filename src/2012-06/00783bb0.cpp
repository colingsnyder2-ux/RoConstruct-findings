// roc 2012-06 00783bb0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783bb0
//
// 00783bb0  6810707500           push 0x757010
// 00783bb5  68f864e300           push 0xe364f8
// 00783bba  e8e1d9c7ff           call 0x4015a0
// 00783bbf  83c408               add esp, 8
// 00783bc2  e9e933fdff           jmp 0x756fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
