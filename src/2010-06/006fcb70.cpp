// roc 2010-06 006fcb70  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fcb70
//
// 006fcb70  6810c76f00           push 0x6fc710
// 006fcb75  68f023c200           push 0xc223f0
// 006fcb7a  e8114bd0ff           call 0x401690
// 006fcb7f  83c408               add esp, 8
// 006fcb82  e9a9f9ffff           jmp 0x6fc530
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
