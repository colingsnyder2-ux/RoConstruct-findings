// roc 2010-06 00647820  unit: RBX::HingeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647820
//
// 00647820  6860676400           push 0x646760
// 00647825  687cb8c100           push 0xc1b87c
// 0064782a  e8619edbff           call 0x401690
// 0064782f  83c408               add esp, 8
// 00647832  e939e6ffff           jmp 0x645e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
