// roc 2011-06 0067d340  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067d340
//
// 0067d340  68c0694800           push 0x4869c0
// 0067d345  681041cb00           push 0xcb4110
// 0067d34a  e8c142d8ff           call 0x401610
// 0067d34f  83c408               add esp, 8
// 0067d352  e9a98ce0ff           jmp 0x486000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
