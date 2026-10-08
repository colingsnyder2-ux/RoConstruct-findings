// roc 2010-06 00749d50  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00749d50
//
// 00749d50  6820686400           push 0x646820
// 00749d55  68acb8c100           push 0xc1b8ac
// 00749d5a  e83179cbff           call 0x401690
// 00749d5f  83c408               add esp, 8
// 00749d62  e949c6efff           jmp 0x6463b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
