// roc 2009-12 00638740  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00638740
//
// 00638740  6800214000           push 0x402100
// 00638745  682495b700           push 0xb79524
// 0063874a  e8e18edcff           call 0x401630
// 0063874f  83c408               add esp, 8
// 00638752  e95998dcff           jmp 0x401fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
