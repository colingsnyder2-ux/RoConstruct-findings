// roc 2009-12 00450850  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00450850
//
// 00450850  6840944400           push 0x449440
// 00450855  681caeb700           push 0xb7ae1c
// 0045085a  e8d10dfbff           call 0x401630
// 0045085f  83c408               add esp, 8
// 00450862  e9798bffff           jmp 0x4493e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
