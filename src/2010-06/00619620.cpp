// roc 2010-06 00619620  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00619620
//
// 00619620  68f0a94200           push 0x42a9f0
// 00619625  68a808c000           push 0xc008a8
// 0061962a  e86180deff           call 0x401690
// 0061962f  83c408               add esp, 8
// 00619632  e999f8e0ff           jmp 0x428ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
