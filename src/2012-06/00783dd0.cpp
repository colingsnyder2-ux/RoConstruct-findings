// roc 2012-06 00783dd0  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783dd0
//
// 00783dd0  68d0107700           push 0x7710d0
// 00783dd5  680c86e400           push 0xe4860c
// 00783dda  e8c1d7c7ff           call 0x4015a0
// 00783ddf  83c408               add esp, 8
// 00783de2  e989d2feff           jmp 0x771070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
