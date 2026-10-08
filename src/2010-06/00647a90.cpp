// roc 2010-06 00647a90  unit: RBX::OscillateMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647a90
//
// 00647a90  6890676400           push 0x646790
// 00647a95  6888b8c100           push 0xc1b888
// 00647a9a  e8f19bdbff           call 0x401690
// 00647a9f  83c408               add esp, 8
// 00647aa2  e919e5ffff           jmp 0x645fc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
