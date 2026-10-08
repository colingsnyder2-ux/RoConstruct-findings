// roc 2010-06 0074a590  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0074a590
//
// 0074a590  6850686400           push 0x646850
// 0074a595  68b8b8c100           push 0xc1b8b8
// 0074a59a  e8f170cbff           call 0x401690
// 0074a59f  83c408               add esp, 8
// 0074a5a2  e959bfefff           jmp 0x646500
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
