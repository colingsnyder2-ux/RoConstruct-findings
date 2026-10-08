// roc 2011-06 007f1440  unit: RBX::LuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f1440
//
// 007f1440  6810147f00           push 0x7f1410
// 007f1445  68d460cd00           push 0xcd60d4
// 007f144a  e8c101c1ff           call 0x401610
// 007f144f  83c408               add esp, 8
// 007f1452  e9b9fdffff           jmp 0x7f1210
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
