// roc 2012-06 007839f0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007839f0
//
// 007839f0  68e0d37000           push 0x70d3e0
// 007839f5  686814e300           push 0xe31468
// 007839fa  e8a1dbc7ff           call 0x4015a0
// 007839ff  83c408               add esp, 8
// 00783a02  e97999f8ff           jmp 0x70d380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
