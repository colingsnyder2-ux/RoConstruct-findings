// roc 2009-12 007454d0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007454d0
//
// 007454d0  6870996400           push 0x649970
// 007454d5  68f05fb800           push 0xb85ff0
// 007454da  e851c1cbff           call 0x401630
// 007454df  83c408               add esp, 8
// 007454e2  e90931f0ff           jmp 0x6485f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
