// roc 2007-08 005b08c0  unit: RBX::VRotateV::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b08c0
//
// 005b08c0  6874e98b00           push 0x8be974
// 005b08c5  68a0714a00           push 0x4a71a0
// 005b08ca  e8514c1700           call 0x725520
// 005b08cf  83c408               add esp, 8
// 005b08d2  e99951efff           jmp 0x4a5a70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
