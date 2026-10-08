// roc 2012-06 00783e30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783e30
//
// 00783e30  68e0167300           push 0x7316e0
// 00783e35  680038e300           push 0xe33800
// 00783e3a  e861d7c7ff           call 0x4015a0
// 00783e3f  83c408               add esp, 8
// 00783e42  e939d8faff           jmp 0x731680
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
