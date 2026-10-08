// roc 2009-06 006541c0  unit: RBX::WeldTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006541c0
//
// 006541c0  6860346500           push 0x653460
// 006541c5  6868c7a400           push 0xa4c768
// 006541ca  e841d5daff           call 0x401710
// 006541cf  83c408               add esp, 8
// 006541d2  e909e8ffff           jmp 0x6529e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
