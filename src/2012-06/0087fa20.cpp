// roc 2012-06 0087fa20  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0087fa20
//
// 0087fa20  68e01f6d00           push 0x6d1fe0
// 0087fa25  685cf9e200           push 0xe2f95c
// 0087fa2a  e8711bb8ff           call 0x4015a0
// 0087fa2f  83c408               add esp, 8
// 0087fa32  e9790ce5ff           jmp 0x6d06b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
