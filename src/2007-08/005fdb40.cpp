// roc 2007-08 005fdb40  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fdb40
//
// 005fdb40  68044e8c00           push 0x8c4e04
// 005fdb45  68e03d5900           push 0x593de0
// 005fdb4a  e8d1791200           call 0x725520
// 005fdb4f  83c408               add esp, 8
// 005fdb52  e9f95ef9ff           jmp 0x593a50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
