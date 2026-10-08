// roc 2012-06 00783a90  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783a90
//
// 00783a90  68607a7300           push 0x737a60
// 00783a95  68e444e300           push 0xe344e4
// 00783a9a  e801dbc7ff           call 0x4015a0
// 00783a9f  83c408               add esp, 8
// 00783aa2  e9593ffbff           jmp 0x737a00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
