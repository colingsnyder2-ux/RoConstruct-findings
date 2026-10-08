// roc 2012-06 00783a70  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783a70
//
// 00783a70  68f0797300           push 0x7379f0
// 00783a75  68e044e300           push 0xe344e0
// 00783a7a  e821dbc7ff           call 0x4015a0
// 00783a7f  83c408               add esp, 8
// 00783a82  e9093ffbff           jmp 0x737990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
