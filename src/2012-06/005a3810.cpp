// roc 2012-06 005a3810  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a3810
//
// 005a3810  6820255600           push 0x562520
// 005a3815  685843e200           push 0xe24358
// 005a381a  e881dde5ff           call 0x4015a0
// 005a381f  83c408               add esp, 8
// 005a3822  e919e7fbff           jmp 0x561f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
