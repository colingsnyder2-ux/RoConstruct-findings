// roc 2012-06 008fd800  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008fd800
//
// 008fd800  6820d08f00           push 0x8fd020
// 008fd805  683067e500           push 0xe56730
// 008fd80a  e8913db0ff           call 0x4015a0
// 008fd80f  83c408               add esp, 8
// 008fd812  e9b9f6ffff           jmp 0x8fced0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
