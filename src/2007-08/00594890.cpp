// roc 2007-08 00594890  unit: RBX::InletTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594890
//
// 00594890  68cc4d8c00           push 0x8c4dcc
// 00594895  68003d5900           push 0x593d00
// 0059489a  e8810c1900           call 0x725520
// 0059489f  83c408               add esp, 8
// 005948a2  e989ebffff           jmp 0x593430
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
