// roc 2012-06 00783bf0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783bf0
//
// 00783bf0  68d0097700           push 0x7709d0
// 00783bf5  68cc85e400           push 0xe485cc
// 00783bfa  e8a1d9c7ff           call 0x4015a0
// 00783bff  83c408               add esp, 8
// 00783c02  e969cdfeff           jmp 0x770970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
