// roc 2007-08 005b0680  unit: RBX::VWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0680
//
// 005b0680  6864e98b00           push 0x8be964
// 005b0685  6860714a00           push 0x4a7160
// 005b068a  e8914e1700           call 0x725520
// 005b068f  83c408               add esp, 8
// 005b0692  e9d951efff           jmp 0x4a5870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
