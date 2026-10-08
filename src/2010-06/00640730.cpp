// roc 2010-06 00640730  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00640730
//
// 00640730  68907c4500           push 0x457c90
// 00640735  68e81dc000           push 0xc01de8
// 0064073a  e8510fdcff           call 0x401690
// 0064073f  83c408               add esp, 8
// 00640742  e9f958e1ff           jmp 0x456040
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
