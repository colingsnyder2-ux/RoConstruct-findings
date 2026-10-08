// roc 2012-06 00897ba0  unit: RBX::BoxSelectCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00897ba0
//
// 00897ba0  6860728900           push 0x897260
// 00897ba5  687025e500           push 0xe52570
// 00897baa  e8f199b6ff           call 0x4015a0
// 00897baf  83c408               add esp, 8
// 00897bb2  e949f4ffff           jmp 0x897000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
