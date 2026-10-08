// roc 2010-06 005c4ad0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c4ad0
//
// 005c4ad0  68308e5b00           push 0x5b8e30
// 005c4ad5  68d882c100           push 0xc182d8
// 005c4ada  e8b1cbe3ff           call 0x401690
// 005c4adf  83c408               add esp, 8
// 005c4ae2  e9e942ffff           jmp 0x5b8dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
