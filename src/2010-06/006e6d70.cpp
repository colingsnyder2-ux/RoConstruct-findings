// roc 2010-06 006e6d70  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6d70
//
// 006e6d70  68306c6e00           push 0x6e6c30
// 006e6d75  688413c200           push 0xc21384
// 006e6d7a  e811a9d1ff           call 0x401690
// 006e6d7f  83c408               add esp, 8
// 006e6d82  e999fdffff           jmp 0x6e6b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
