// roc 2011-06 00721500  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721500
//
// 00721500  68d0147200           push 0x7214d0
// 00721505  681840cd00           push 0xcd4018
// 0072150a  e80101ceff           call 0x401610
// 0072150f  83c408               add esp, 8
// 00721512  e949ffffff           jmp 0x721460
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
