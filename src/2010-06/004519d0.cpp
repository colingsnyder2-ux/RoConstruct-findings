// roc 2010-06 004519d0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004519d0
//
// 004519d0  6810ab4400           push 0x44ab10
// 004519d5  68d813c000           push 0xc013d8
// 004519da  e8b1fcfaff           call 0x401690
// 004519df  83c408               add esp, 8
// 004519e2  e9c990ffff           jmp 0x44aab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
