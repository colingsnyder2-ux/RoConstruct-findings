// roc 2007-08 005944a0  unit: RBX::GlueTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005944a0
//
// 005944a0  68c04d8c00           push 0x8c4dc0
// 005944a5  68d03c5900           push 0x593cd0
// 005944aa  e871101900           call 0x725520
// 005944af  83c408               add esp, 8
// 005944b2  e929eeffff           jmp 0x5932e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
