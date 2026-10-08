// roc 2012-06 00783cb0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783cb0
//
// 00783cb0  6890d66900           push 0x69d690
// 00783cb5  6864d3e200           push 0xe2d364
// 00783cba  e8e1d8c7ff           call 0x4015a0
// 00783cbf  83c408               add esp, 8
// 00783cc2  e96999f1ff           jmp 0x69d630
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
