// roc 2012-06 00947b00  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00947b00
//
// 00947b00  68b0458a00           push 0x8a45b0
// 00947b05  68902fe500           push 0xe52f90
// 00947b0a  e8919aabff           call 0x4015a0
// 00947b0f  83c408               add esp, 8
// 00947b12  e9f9c4f5ff           jmp 0x8a4010
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
