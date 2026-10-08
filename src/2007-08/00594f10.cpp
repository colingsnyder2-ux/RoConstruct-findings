// roc 2007-08 00594f10  unit: RBX::AnchorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594f10
//
// 00594f10  68e44d8c00           push 0x8c4de4
// 00594f15  68603d5900           push 0x593d60
// 00594f1a  e801061900           call 0x725520
// 00594f1f  83c408               add esp, 8
// 00594f22  e9a9e7ffff           jmp 0x5936d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
