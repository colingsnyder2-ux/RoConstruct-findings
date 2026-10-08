// roc 2008-06 005fe240  unit: RBX::ToolMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe240
//
// 005fe240  68e4b59700           push 0x97b5e4
// 005fe245  6800d85f00           push 0x5fd800
// 005fe24a  e8e190f5ff           call 0x557330
// 005fe24f  83c408               add esp, 8
// 005fe252  e9c9f3ffff           jmp 0x5fd620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
