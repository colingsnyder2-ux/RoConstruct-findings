// roc 2007-08 005a59c0  unit: RBX::VHumanoid::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a59c0
//
// 005a59c0  68c0dc8b00           push 0x8bdcc0
// 005a59c5  68c0794800           push 0x4879c0
// 005a59ca  e851fb1700           call 0x725520
// 005a59cf  83c408               add esp, 8
// 005a59d2  e99918eeff           jmp 0x487270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
