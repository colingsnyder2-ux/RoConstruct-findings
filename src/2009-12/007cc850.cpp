// roc 2009-12 007cc850  unit: RBX::GroupDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cc850
//
// 007cc850  6820c87c00           push 0x7cc820
// 007cc855  68a48db900           push 0xb98da4
// 007cc85a  e8d14dc3ff           call 0x401630
// 007cc85f  83c408               add esp, 8
// 007cc862  e909ffffff           jmp 0x7cc770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
