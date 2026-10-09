// roc 2009-12 00450870  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450870
//
// 00450870  68b0944400           push 0x4494b0
// 00450875  6820aeb700           push 0xb7ae20
// 0045087a  e8b10dfbff           call 0x401630
// 0045087f  83c408               add esp, 8
// 00450882  e9c98bffff           jmp 0x449450
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
