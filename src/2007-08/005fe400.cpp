// roc 2007-08 005fe400  unit: RBX::AxisMoveTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe400
//
// 005fe400  68104e8c00           push 0x8c4e10
// 005fe405  68103e5900           push 0x593e10
// 005fe40a  e811711200           call 0x725520
// 005fe40f  83c408               add esp, 8
// 005fe412  e98957f9ff           jmp 0x593ba0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
