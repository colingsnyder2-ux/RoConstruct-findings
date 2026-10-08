// roc 2008-06 00643ed0  unit: RBX::HUMAN::Landed  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643ed0
//
// 00643ed0  68e0d59700           push 0x97d5e0
// 00643ed5  68e03c6400           push 0x643ce0
// 00643eda  e85134f1ff           call 0x557330
// 00643edf  83c408               add esp, 8
// 00643ee2  e929f5ffff           jmp 0x643410
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
