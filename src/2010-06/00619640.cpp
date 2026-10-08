// roc 2010-06 00619640  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00619640
//
// 00619640  6800aa4200           push 0x42aa00
// 00619645  68ac08c000           push 0xc008ac
// 0061964a  e84180deff           call 0x401690
// 0061964f  83c408               add esp, 8
// 00619652  e9e9f8e0ff           jmp 0x428f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
