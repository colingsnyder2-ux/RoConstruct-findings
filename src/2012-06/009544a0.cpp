// roc 2012-06 009544a0  unit: RBX::GroupDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009544a0
//
// 009544a0  6870449500           push 0x954470
// 009544a5  683c6fe500           push 0xe56f3c
// 009544aa  e8f1d0aaff           call 0x4015a0
// 009544af  83c408               add esp, 8
// 009544b2  e909ffffff           jmp 0x9543c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
