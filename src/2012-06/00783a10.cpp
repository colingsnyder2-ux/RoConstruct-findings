// roc 2012-06 00783a10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783a10
//
// 00783a10  6820047700           push 0x770420
// 00783a15  689885e400           push 0xe48598
// 00783a1a  e881dbc7ff           call 0x4015a0
// 00783a1f  83c408               add esp, 8
// 00783a22  e999c9feff           jmp 0x7703c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
