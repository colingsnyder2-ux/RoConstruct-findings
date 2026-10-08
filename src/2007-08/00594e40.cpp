// roc 2007-08 00594e40  unit: RBX::ModelSetPrimaryPartTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594e40
//
// 00594e40  68b84d8c00           push 0x8c4db8
// 00594e45  68b03c5900           push 0x593cb0
// 00594e4a  e8d1061900           call 0x725520
// 00594e4f  83c408               add esp, 8
// 00594e52  e9a9e3ffff           jmp 0x593200
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
