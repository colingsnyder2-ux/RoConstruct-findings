// roc 2012-06 00783a50  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783a50
//
// 00783a50  6800057700           push 0x770500
// 00783a55  68a085e400           push 0xe485a0
// 00783a5a  e841dbc7ff           call 0x4015a0
// 00783a5f  83c408               add esp, 8
// 00783a62  e939cafeff           jmp 0x7704a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
