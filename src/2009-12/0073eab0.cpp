// roc 2009-12 0073eab0  unit: RBX::VCollectionService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073eab0
//
// 0073eab0  68f0986400           push 0x6498f0
// 0073eab5  68d05fb800           push 0xb85fd0
// 0073eaba  e8712bccff           call 0x401630
// 0073eabf  83c408               add esp, 8
// 0073eac2  e9a997f0ff           jmp 0x648270
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
