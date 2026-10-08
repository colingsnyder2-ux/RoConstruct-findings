// roc 2011-06 006d3980  unit: RBX::VSnap::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d3980
//
// 006d3980  68e0564f00           push 0x4f56e0
// 006d3985  68f482cb00           push 0xcb82f4
// 006d398a  e881dcd2ff           call 0x401610
// 006d398f  83c408               add esp, 8
// 006d3992  e9390ae2ff           jmp 0x4f43d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
