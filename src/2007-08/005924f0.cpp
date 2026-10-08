// roc 2007-08 005924f0  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005924f0
//
// 005924f0  68e4be8b00           push 0x8bbee4
// 005924f5  6800de4400           push 0x44de00
// 005924fa  e821301900           call 0x725520
// 005924ff  83c408               add esp, 8
// 00592502  e969abebff           jmp 0x44d070
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
