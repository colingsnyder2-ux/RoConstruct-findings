// roc 2012-06 00783df0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783df0
//
// 00783df0  6830f37200           push 0x72f330
// 00783df5  68d831e300           push 0xe331d8
// 00783dfa  e8a1d7c7ff           call 0x4015a0
// 00783dff  83c408               add esp, 8
// 00783e02  e9c9b4faff           jmp 0x72f2d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
