// roc 2007-08 00625d20  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625d20
//
// 00625d20  68d0828c00           push 0x8c82d0
// 00625d25  6880586200           push 0x625880
// 00625d2a  e8f1f70f00           call 0x725520
// 00625d2f  83c408               add esp, 8
// 00625d32  e989faffff           jmp 0x6257c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
