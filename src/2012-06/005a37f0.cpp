// roc 2012-06 005a37f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a37f0
//
// 005a37f0  6810255600           push 0x562510
// 005a37f5  685443e200           push 0xe24354
// 005a37fa  e8a1dde5ff           call 0x4015a0
// 005a37ff  83c408               add esp, 8
// 005a3802  e9c9e6fbff           jmp 0x561ed0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
