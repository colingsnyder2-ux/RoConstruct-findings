// roc 2010-06 00603490  unit: RBX::ArrowTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00603490
//
// 00603490  6880246000           push 0x602480
// 00603495  68e09dc100           push 0xc19de0
// 0060349a  e8f1e1dfff           call 0x401690
// 0060349f  83c408               add esp, 8
// 006034a2  e939e3ffff           jmp 0x6017e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
