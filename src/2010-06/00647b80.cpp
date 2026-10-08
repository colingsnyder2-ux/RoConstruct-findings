// roc 2010-06 00647b80  unit: RBX::ModelSetFrontTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647b80
//
// 00647b80  68a0676400           push 0x6467a0
// 00647b85  688cb8c100           push 0xc1b88c
// 00647b8a  e8019bdbff           call 0x401690
// 00647b8f  83c408               add esp, 8
// 00647b92  e999e4ffff           jmp 0x646030
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
