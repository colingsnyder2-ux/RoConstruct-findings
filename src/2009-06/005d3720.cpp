// roc 2009-06 005d3720  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d3720
//
// 005d3720  6860254000           push 0x402560
// 005d3725  683c97a300           push 0xa3973c
// 005d372a  e8e1dfe2ff           call 0x401710
// 005d372f  83c408               add esp, 8
// 005d3732  e9e9ece2ff           jmp 0x402420
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
