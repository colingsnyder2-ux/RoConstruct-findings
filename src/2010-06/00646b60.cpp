// roc 2010-06 00646b60  unit: RBX::ResizeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00646b60
//
// 00646b60  68f0676400           push 0x6467f0
// 00646b65  68a0b8c100           push 0xc1b8a0
// 00646b6a  e821abdbff           call 0x401690
// 00646b6f  83c408               add esp, 8
// 00646b72  e9e9f6ffff           jmp 0x646260
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
