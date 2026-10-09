// roc 2009-12 004508b0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004508b0
//
// 004508b0  6890954400           push 0x449590
// 004508b5  6828aeb700           push 0xb7ae28
// 004508ba  e8710dfbff           call 0x401630
// 004508bf  83c408               add esp, 8
// 004508c2  e9698cffff           jmp 0x449530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
