// roc 2007-08 005a3260  unit: RBX::VTeams::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3260
//
// 005a3260  68b8dc8b00           push 0x8bdcb8
// 005a3265  68a0794800           push 0x4879a0
// 005a326a  e8b1221800           call 0x725520
// 005a326f  83c408               add esp, 8
// 005a3272  e9f93eeeff           jmp 0x487170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
