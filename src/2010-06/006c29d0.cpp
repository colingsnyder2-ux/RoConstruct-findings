// roc 2010-06 006c29d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c29d0
//
// 006c29d0  6830216c00           push 0x6c2130
// 006c29d5  682801c200           push 0xc20128
// 006c29da  e8b1ecd3ff           call 0x401690
// 006c29df  83c408               add esp, 8
// 006c29e2  e979f0ffff           jmp 0x6c1a60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
