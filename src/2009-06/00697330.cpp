// roc 2009-06 00697330  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00697330
//
// 00697330  68e0a05e00           push 0x5ea0e0
// 00697335  688449a400           push 0xa44984
// 0069733a  e8d1a3d6ff           call 0x401710
// 0069733f  83c408               add esp, 8
// 00697342  e9791ff5ff           jmp 0x5e92c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
