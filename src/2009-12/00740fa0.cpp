// roc 2009-12 00740fa0  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00740fa0
//
// 00740fa0  6810996400           push 0x649910
// 00740fa5  68d85fb800           push 0xb85fd8
// 00740faa  e88106ccff           call 0x401630
// 00740faf  83c408               add esp, 8
// 00740fb2  e99973f0ff           jmp 0x648350
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
