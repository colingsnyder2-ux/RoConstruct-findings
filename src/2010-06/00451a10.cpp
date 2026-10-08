// roc 2010-06 00451a10  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451a10
//
// 00451a10  68f0ab4400           push 0x44abf0
// 00451a15  68e013c000           push 0xc013e0
// 00451a1a  e871fcfaff           call 0x401690
// 00451a1f  83c408               add esp, 8
// 00451a22  e96991ffff           jmp 0x44ab90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
