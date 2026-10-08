// roc 2007-08 00595a30  unit: RBX::LaserTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595a30
//
// 00595a30  68fc4d8c00           push 0x8c4dfc
// 00595a35  68c03d5900           push 0x593dc0
// 00595a3a  e8e1fa1800           call 0x725520
// 00595a3f  83c408               add esp, 8
// 00595a42  e929dfffff           jmp 0x593970
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
