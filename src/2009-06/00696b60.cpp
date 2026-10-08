// roc 2009-06 00696b60  unit: RBX::VVirtualUser::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00696b60
//
// 00696b60  68d0a05e00           push 0x5ea0d0
// 00696b65  688049a400           push 0xa44980
// 00696b6a  e8a1abd6ff           call 0x401710
// 00696b6f  83c408               add esp, 8
// 00696b72  e9d926f5ff           jmp 0x5e9250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
