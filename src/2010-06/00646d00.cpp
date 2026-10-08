// roc 2010-06 00646d00  unit: RBX::AxisMoveTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00646d00
//
// 00646d00  6860686400           push 0x646860
// 00646d05  68bcb8c100           push 0xc1b8bc
// 00646d0a  e881a9dbff           call 0x401690
// 00646d0f  83c408               add esp, 8
// 00646d12  e959f8ffff           jmp 0x646570
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
