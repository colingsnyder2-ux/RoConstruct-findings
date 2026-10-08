// roc 2010-06 00655e00  unit: RBX::VPose::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00655e00
//
// 00655e00  68c0ca4700           push 0x47cac0
// 00655e05  681030c000           push 0xc03010
// 00655e0a  e881b8daff           call 0x401690
// 00655e0f  83c408               add esp, 8
// 00655e12  e92967e2ff           jmp 0x47c540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
