// roc 2010-06 00648490  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00648490
//
// 00648490  6800686400           push 0x646800
// 00648495  68a4b8c100           push 0xc1b8a4
// 0064849a  e8f191dbff           call 0x401690
// 0064849f  83c408               add esp, 8
// 006484a2  e929deffff           jmp 0x6462d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
