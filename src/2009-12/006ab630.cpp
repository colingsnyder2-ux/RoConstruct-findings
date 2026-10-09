// roc 2009-12 006ab630  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ab630
//
// 006ab630  68d0a44200           push 0x42a4d0
// 006ab635  6800a3b700           push 0xb7a300
// 006ab63a  e8f15fd5ff           call 0x401630
// 006ab63f  83c408               add esp, 8
// 006ab642  e909d5d7ff           jmp 0x428b50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
