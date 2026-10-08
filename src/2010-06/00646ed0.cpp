// roc 2010-06 00646ed0  unit: RBX::AxisRotateTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00646ed0
//
// 00646ed0  6870686400           push 0x646870
// 00646ed5  68c0b8c100           push 0xc1b8c0
// 00646eda  e8b1a7dbff           call 0x401690
// 00646edf  83c408               add esp, 8
// 00646ee2  e9f9f6ffff           jmp 0x6465e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
