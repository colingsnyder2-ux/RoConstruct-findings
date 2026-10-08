// roc 2011-06 006fa010  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fa010
//
// 006fa010  68f0996f00           push 0x6f99f0
// 006fa015  682427cd00           push 0xcd2724
// 006fa01a  e8f175d0ff           call 0x401610
// 006fa01f  83c408               add esp, 8
// 006fa022  e999f3ffff           jmp 0x6f93c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
