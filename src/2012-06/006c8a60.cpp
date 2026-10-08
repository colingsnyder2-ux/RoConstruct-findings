// roc 2012-06 006c8a60  unit: RBX::Reflection::PAVPropertyDescriptor::?$trie::depth_exceeded_exception  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006c8a60
//
// 006c8a60  68508a6c00           push 0x6c8a50
// 006c8a65  68a0e7e200           push 0xe2e7a0
// 006c8a6a  e8318bd3ff           call 0x4015a0
// 006c8a6f  83c408               add esp, 8
// 006c8a72  e979ffffff           jmp 0x6c89f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
