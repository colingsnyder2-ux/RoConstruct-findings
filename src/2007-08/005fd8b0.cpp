// roc 2007-08 005fd8b0  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fd8b0
//
// 005fd8b0  68004e8c00           push 0x8c4e00
// 005fd8b5  68d03d5900           push 0x593dd0
// 005fd8ba  e8617c1200           call 0x725520
// 005fd8bf  83c408               add esp, 8
// 005fd8c2  e91961f9ff           jmp 0x5939e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
