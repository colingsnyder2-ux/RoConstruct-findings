// roc 2008-06 005fe260  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fe260
//
// 005fe260  68e8b59700           push 0x97b5e8
// 005fe265  6810d85f00           push 0x5fd810
// 005fe26a  e8c190f5ff           call 0x557330
// 005fe26f  83c408               add esp, 8
// 005fe272  e919f4ffff           jmp 0x5fd690
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
