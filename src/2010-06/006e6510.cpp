// roc 2010-06 006e6510  unit: RBX::VGuiBase3d::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6510
//
// 006e6510  6850646e00           push 0x6e6450
// 006e6515  681813c200           push 0xc21318
// 006e651a  e871b1d1ff           call 0x401690
// 006e651f  83c408               add esp, 8
// 006e6522  e9b9feffff           jmp 0x6e63e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
