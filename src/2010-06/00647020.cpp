// roc 2010-06 00647020  unit: RBX::FlatTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00647020
//
// 00647020  6800676400           push 0x646700
// 00647025  6864b8c100           push 0xc1b864
// 0064702a  e861a6dbff           call 0x401690
// 0064702f  83c408               add esp, 8
// 00647032  e999ebffff           jmp 0x645bd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
