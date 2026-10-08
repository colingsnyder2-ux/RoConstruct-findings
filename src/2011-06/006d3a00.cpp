// roc 2011-06 006d3a00  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3a00
//
// 006d3a00  6840574f00           push 0x4f5740
// 006d3a05  680c83cb00           push 0xcb830c
// 006d3a0a  e801dcd2ff           call 0x401610
// 006d3a0f  83c408               add esp, 8
// 006d3a12  e9590ce2ff           jmp 0x4f4670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
