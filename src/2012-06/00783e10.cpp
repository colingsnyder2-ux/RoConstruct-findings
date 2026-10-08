// roc 2012-06 00783e10  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783e10
//
// 00783e10  68a0f37200           push 0x72f3a0
// 00783e15  68dc31e300           push 0xe331dc
// 00783e1a  e881d7c7ff           call 0x4015a0
// 00783e1f  83c408               add esp, 8
// 00783e22  e919b5faff           jmp 0x72f340
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
