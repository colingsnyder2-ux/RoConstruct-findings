// roc 2011-06 005a7180  unit: RBX::VTeam::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7180
//
// 005a7180  68104d4000           push 0x404d10
// 005a7185  687416cb00           push 0xcb1674
// 005a718a  e881a4e5ff           call 0x401610
// 005a718f  83c408               add esp, 8
// 005a7192  e9c9d2e5ff           jmp 0x404460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
