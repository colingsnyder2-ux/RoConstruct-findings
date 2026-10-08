// roc 2007-08 00594330  unit: RBX::FlatTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594330
//
// 00594330  68bc4d8c00           push 0x8c4dbc
// 00594335  68c03c5900           push 0x593cc0
// 0059433a  e8e1111900           call 0x725520
// 0059433f  83c408               add esp, 8
// 00594342  e929efffff           jmp 0x593270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
