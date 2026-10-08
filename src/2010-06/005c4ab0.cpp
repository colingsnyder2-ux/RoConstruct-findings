// roc 2010-06 005c4ab0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4ab0
//
// 005c4ab0  68208b5b00           push 0x5b8b20
// 005c4ab5  68bc82c100           push 0xc182bc
// 005c4aba  e8d1cbe3ff           call 0x401690
// 005c4abf  83c408               add esp, 8
// 005c4ac2  e9f93fffff           jmp 0x5b8ac0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
