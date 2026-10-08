// roc 2010-06 0064aee0  unit: N::V?$RunningAverageItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0064aee0
//
// 0064aee0  68d0ae6400           push 0x64aed0
// 0064aee5  68fcbbc100           push 0xc1bbfc
// 0064aeea  e8a167dbff           call 0x401690
// 0064aeef  83c408               add esp, 8
// 0064aef2  e969ffffff           jmp 0x64ae60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
