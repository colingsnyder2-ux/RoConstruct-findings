// roc 2007-08 005a0330  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a0330
//
// 005a0330  68a0dc8b00           push 0x8bdca0
// 005a0335  6840794800           push 0x487940
// 005a033a  e8e1511800           call 0x725520
// 005a033f  83c408               add esp, 8
// 005a0342  e9296beeff           jmp 0x486e70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
