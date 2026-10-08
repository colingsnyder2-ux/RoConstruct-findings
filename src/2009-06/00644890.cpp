// roc 2009-06 00644890  unit: RBX::VStockSound::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00644890
//
// 00644890  68d03b6400           push 0x643bd0
// 00644895  6804bfa400           push 0xa4bf04
// 0064489a  e871cedbff           call 0x401710
// 0064489f  83c408               add esp, 8
// 006448a2  e989ecffff           jmp 0x643530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
