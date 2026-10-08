// roc 2012-06 0095eaf0  unit: RBX::HUMAN::FallingDown  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095eaf0
//
// 0095eaf0  68c0ea9500           push 0x95eac0
// 0095eaf5  686c70e500           push 0xe5706c
// 0095eafa  e8a12aaaff           call 0x4015a0
// 0095eaff  83c408               add esp, 8
// 0095eb02  e9b9feffff           jmp 0x95e9c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
