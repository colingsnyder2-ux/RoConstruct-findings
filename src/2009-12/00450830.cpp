// roc 2009-12 00450830  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450830
//
// 00450830  68d0934400           push 0x4493d0
// 00450835  6818aeb700           push 0xb7ae18
// 0045083a  e8f10dfbff           call 0x401630
// 0045083f  83c408               add esp, 8
// 00450842  e9298bffff           jmp 0x449370
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
