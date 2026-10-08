// roc 2008-06 005fe420  unit: RBX::VTool::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe420
//
// 005fe420  680c529700           push 0x97520c
// 005fe425  6820665700           push 0x576620
// 005fe42a  e8018ff5ff           call 0x557330
// 005fe42f  83c408               add esp, 8
// 005fe432  e98971f7ff           jmp 0x5755c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
