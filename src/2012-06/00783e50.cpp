// roc 2012-06 00783e50  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783e50
//
// 00783e50  6850177300           push 0x731750
// 00783e55  680438e300           push 0xe33804
// 00783e5a  e841d7c7ff           call 0x4015a0
// 00783e5f  83c408               add esp, 8
// 00783e62  e989d8faff           jmp 0x7316f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
