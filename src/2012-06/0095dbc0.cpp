// roc 2012-06 0095dbc0  unit: RBX::HUMAN::RunningSlave  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0095dbc0
//
// 0095dbc0  6860db9500           push 0x95db60
// 0095dbc5  681870e500           push 0xe57018
// 0095dbca  e8d139aaff           call 0x4015a0
// 0095dbcf  83c408               add esp, 8
// 0095dbd2  e919ffffff           jmp 0x95daf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
