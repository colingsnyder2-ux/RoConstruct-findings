// roc 2007-08 005ed250  unit: RBX::VRocket::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ed250
//
// 005ed250  68dc378c00           push 0x8c37dc
// 005ed255  68f0dd5800           push 0x58ddf0
// 005ed25a  e8c1821300           call 0x725520
// 005ed25f  83c408               add esp, 8
// 005ed262  e96908faff           jmp 0x58dad0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
