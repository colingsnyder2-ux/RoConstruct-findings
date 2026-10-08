// roc 2010-06 00451a30  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451a30
//
// 00451a30  6860ac4400           push 0x44ac60
// 00451a35  68e413c000           push 0xc013e4
// 00451a3a  e851fcfaff           call 0x401690
// 00451a3f  83c408               add esp, 8
// 00451a42  e9b991ffff           jmp 0x44ac00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
