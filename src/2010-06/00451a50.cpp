// roc 2010-06 00451a50  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451a50
//
// 00451a50  68d0ac4400           push 0x44acd0
// 00451a55  68e813c000           push 0xc013e8
// 00451a5a  e831fcfaff           call 0x401690
// 00451a5f  83c408               add esp, 8
// 00451a62  e90992ffff           jmp 0x44ac70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
