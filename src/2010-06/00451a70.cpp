// roc 2010-06 00451a70  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00451a70
//
// 00451a70  6840ad4400           push 0x44ad40
// 00451a75  68ec13c000           push 0xc013ec
// 00451a7a  e811fcfaff           call 0x401690
// 00451a7f  83c408               add esp, 8
// 00451a82  e95992ffff           jmp 0x44ace0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
