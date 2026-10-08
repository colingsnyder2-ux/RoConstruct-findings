// roc 2010-06 00648660  unit: RBX::SlingshotTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00648660
//
// 00648660  68d0676400           push 0x6467d0
// 00648665  6898b8c100           push 0xc1b898
// 0064866a  e82190dbff           call 0x401690
// 0064866f  83c408               add esp, 8
// 00648672  e909dbffff           jmp 0x646180
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
