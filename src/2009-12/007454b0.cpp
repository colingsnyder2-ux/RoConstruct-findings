// roc 2009-12 007454b0  unit: RBX::VFlagStand::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007454b0
//
// 007454b0  6860996400           push 0x649960
// 007454b5  68ec5fb800           push 0xb85fec
// 007454ba  e871c1cbff           call 0x401630
// 007454bf  83c408               add esp, 8
// 007454c2  e9b930f0ff           jmp 0x648580
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
