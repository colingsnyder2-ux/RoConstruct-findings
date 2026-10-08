// roc 2010-06 006e5e10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e5e10
//
// 006e5e10  68e05c6e00           push 0x6e5ce0
// 006e5e15  688812c200           push 0xc21288
// 006e5e1a  e871b8d1ff           call 0x401690
// 006e5e1f  83c408               add esp, 8
// 006e5e22  e949feffff           jmp 0x6e5c70
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
