// roc 2010-06 004519f0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004519f0
//
// 004519f0  6880ab4400           push 0x44ab80
// 004519f5  68dc13c000           push 0xc013dc
// 004519fa  e891fcfaff           call 0x401690
// 004519ff  83c408               add esp, 8
// 00451a02  e91991ffff           jmp 0x44ab20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
