// roc 2009-06 006250c0  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006250c0
//
// 006250c0  6840734100           push 0x417340
// 006250c5  6860a1a300           push 0xa3a160
// 006250ca  e841c6ddff           call 0x401710
// 006250cf  83c408               add esp, 8
// 006250d2  e9f920dfff           jmp 0x4171d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
