// roc 2012-06 00816950  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00816950
//
// 00816950  68101f5700           push 0x571f10
// 00816955  682447e200           push 0xe24724
// 0081695a  e841acbeff           call 0x4015a0
// 0081695f  83c408               add esp, 8
// 00816962  e9899cd5ff           jmp 0x5705f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
