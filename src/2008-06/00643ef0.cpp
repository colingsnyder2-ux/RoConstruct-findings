// roc 2008-06 00643ef0  unit: RBX::HUMAN::Climbing  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00643ef0
//
// 00643ef0  68e4d59700           push 0x97d5e4
// 00643ef5  68f03c6400           push 0x643cf0
// 00643efa  e83134f1ff           call 0x557330
// 00643eff  83c408               add esp, 8
// 00643f02  e979f5ffff           jmp 0x643480
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
