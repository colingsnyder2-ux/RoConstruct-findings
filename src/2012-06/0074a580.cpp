// roc 2012-06 0074a580  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0074a580
//
// 0074a580  68f0cd4700           push 0x47cdf0
// 0074a585  680ca6e100           push 0xe1a60c
// 0074a58a  e81170cbff           call 0x4015a0
// 0074a58f  83c408               add esp, 8
// 0074a592  e99906d3ff           jmp 0x47ac30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
