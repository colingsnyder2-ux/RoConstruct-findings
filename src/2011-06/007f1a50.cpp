// roc 2011-06 007f1a50  unit: RBX::AdvLuaDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f1a50
//
// 007f1a50  68401a7f00           push 0x7f1a40
// 007f1a55  68ec60cd00           push 0xcd60ec
// 007f1a5a  e8b1fbc0ff           call 0x401610
// 007f1a5f  83c408               add esp, 8
// 007f1a62  e969feffff           jmp 0x7f18d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
