// roc 2010-06 006f28f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f28f0
//
// 006f28f0  6800256f00           push 0x6f2500
// 006f28f5  687c18c200           push 0xc2187c
// 006f28fa  e891edd0ff           call 0x401690
// 006f28ff  83c408               add esp, 8
// 006f2902  e9e9f6ffff           jmp 0x6f1ff0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
