// roc 2012-06 0095ead0  unit: RBX::HUMAN::Dead  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095ead0
//
// 0095ead0  68b0ea9500           push 0x95eab0
// 0095ead5  686870e500           push 0xe57068
// 0095eada  e8c12aaaff           call 0x4015a0
// 0095eadf  83c408               add esp, 8
// 0095eae2  e969feffff           jmp 0x95e950
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
