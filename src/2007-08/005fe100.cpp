// roc 2007-08 005fe100  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe100
//
// 005fe100  680c4e8c00           push 0x8c4e0c
// 005fe105  68003e5900           push 0x593e00
// 005fe10a  e811741200           call 0x725520
// 005fe10f  83c408               add esp, 8
// 005fe112  e9195af9ff           jmp 0x593b30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
