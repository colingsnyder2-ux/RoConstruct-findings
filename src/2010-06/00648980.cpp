// roc 2010-06 00648980  unit: RBX::LaserTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00648980
//
// 00648980  6810686400           push 0x646810
// 00648985  68a8b8c100           push 0xc1b8a8
// 0064898a  e8018ddbff           call 0x401690
// 0064898f  83c408               add esp, 8
// 00648992  e9a9d9ffff           jmp 0x646340
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
