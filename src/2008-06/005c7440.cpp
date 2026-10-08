// roc 2008-06 005c7440  unit: RBX::FillTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7440
//
// 005c7440  6840969700           push 0x979640
// 005c7445  68b0605c00           push 0x5c60b0
// 005c744a  e8e1fef8ff           call 0x557330
// 005c744f  83c408               add esp, 8
// 005c7452  e9c9e0ffff           jmp 0x5c5520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
