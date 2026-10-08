// roc 2011-06 00693420  unit: RBX::VPants::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00693420
//
// 00693420  6820594a00           push 0x4a5920
// 00693425  68f053cb00           push 0xcb53f0
// 0069342a  e8e1e1d6ff           call 0x401610
// 0069342f  83c408               add esp, 8
// 00693432  e9e90be1ff           jmp 0x4a4020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
