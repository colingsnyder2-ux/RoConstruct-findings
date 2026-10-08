// roc 2010-06 005cf8a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cf8a0
//
// 005cf8a0  6800fd4f00           push 0x4ffd00
// 005cf8a5  68a068c000           push 0xc068a0
// 005cf8aa  e8e11de3ff           call 0x401690
// 005cf8af  83c408               add esp, 8
// 005cf8b2  e92903f3ff           jmp 0x4ffbe0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
