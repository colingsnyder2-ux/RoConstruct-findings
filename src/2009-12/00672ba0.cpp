// roc 2009-12 00672ba0  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00672ba0
//
// 00672ba0  6820a14100           push 0x41a120
// 00672ba5  6810a2b700           push 0xb7a210
// 00672baa  e881ead8ff           call 0x401630
// 00672baf  83c408               add esp, 8
// 00672bb2  e93973daff           jmp 0x419ef0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
