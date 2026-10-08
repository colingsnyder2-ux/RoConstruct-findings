// roc 2007-08 005a3e70  unit: RBX::VTimerService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a3e70
//
// 005a3e70  68bcdc8b00           push 0x8bdcbc
// 005a3e75  68b0794800           push 0x4879b0
// 005a3e7a  e8a1161800           call 0x725520
// 005a3e7f  83c408               add esp, 8
// 005a3e82  e96933eeff           jmp 0x4871f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
