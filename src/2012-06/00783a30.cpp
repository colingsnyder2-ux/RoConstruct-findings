// roc 2012-06 00783a30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783a30
//
// 00783a30  6890047700           push 0x770490
// 00783a35  689c85e400           push 0xe4859c
// 00783a3a  e861dbc7ff           call 0x4015a0
// 00783a3f  83c408               add esp, 8
// 00783a42  e9e9c9feff           jmp 0x770430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
