// roc 2012-06 0086a6f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0086a6f0
//
// 0086a6f0  68601f6d00           push 0x6d1f60
// 0086a6f5  683cf9e200           push 0xe2f93c
// 0086a6fa  e8a16eb9ff           call 0x4015a0
// 0086a6ff  83c408               add esp, 8
// 0086a702  e9295ce6ff           jmp 0x6d0330
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
