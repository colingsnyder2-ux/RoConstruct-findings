// roc 2012-06 006fba10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006fba10
//
// 006fba10  68d0934100           push 0x4193d0
// 006fba15  684880e100           push 0xe18048
// 006fba1a  e8815bd0ff           call 0x4015a0
// 006fba1f  83c408               add esp, 8
// 006fba22  e9c9d6d1ff           jmp 0x4190f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
