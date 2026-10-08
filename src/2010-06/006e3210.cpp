// roc 2010-06 006e3210  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e3210
//
// 006e3210  6800326e00           push 0x6e3200
// 006e3215  68cc10c200           push 0xc210cc
// 006e321a  e871e4d1ff           call 0x401690
// 006e321f  83c408               add esp, 8
// 006e3222  e969ffffff           jmp 0x6e3190
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
