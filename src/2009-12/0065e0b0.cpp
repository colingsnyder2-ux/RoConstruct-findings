// roc 2009-12 0065e0b0  unit: RBX::VSeat::?$FactoryProduct::Creator  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065e0b0
//
// 0065e0b0  68a0356500           push 0x6535a0
// 0065e0b5  6820fdb800           push 0xb8fd20
// 0065e0ba  e87135daff           call 0x401630
// 0065e0bf  83c408               add esp, 8
// 0065e0c2  e97954ffff           jmp 0x653540
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
