// roc 2010-06 004519b0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004519b0
//
// 004519b0  68a0aa4400           push 0x44aaa0
// 004519b5  68d413c000           push 0xc013d4
// 004519ba  e8d1fcfaff           call 0x401690
// 004519bf  83c408               add esp, 8
// 004519c2  e97990ffff           jmp 0x44aa40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
