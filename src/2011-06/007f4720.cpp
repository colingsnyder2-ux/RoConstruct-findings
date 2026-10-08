// roc 2011-06 007f4720  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f4720
//
// 007f4720  68a0427f00           push 0x7f42a0
// 007f4725  682461cd00           push 0xcd6124
// 007f472a  e8e1cec0ff           call 0x401610
// 007f472f  83c408               add esp, 8
// 007f4732  e9f9faffff           jmp 0x7f4230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
