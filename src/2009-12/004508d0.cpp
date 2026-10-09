// roc 2009-12 004508d0  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004508d0
//
// 004508d0  6800964400           push 0x449600
// 004508d5  682caeb700           push 0xb7ae2c
// 004508da  e8510dfbff           call 0x401630
// 004508df  83c408               add esp, 8
// 004508e2  e9b98cffff           jmp 0x4495a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
