// roc 2012-06 008acb80  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008acb80
//
// 008acb80  68c0458a00           push 0x8a45c0
// 008acb85  68942fe500           push 0xe52f94
// 008acb8a  e8114ab5ff           call 0x4015a0
// 008acb8f  83c408               add esp, 8
// 008acb92  e9e974ffff           jmp 0x8a4080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
