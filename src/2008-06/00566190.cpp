// roc 2008-06 00566190  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566190
//
// 00566190  680cc39600           push 0x96c30c
// 00566195  68a06e4000           push 0x406ea0
// 0056619a  e89111ffff           call 0x557330
// 0056619f  83c408               add esp, 8
// 005661a2  e93906eaff           jmp 0x4067e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
