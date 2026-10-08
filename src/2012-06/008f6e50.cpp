// roc 2012-06 008f6e50  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f6e50
//
// 008f6e50  68406b8f00           push 0x8f6b40
// 008f6e55  680864e500           push 0xe56408
// 008f6e5a  e841a7b0ff           call 0x4015a0
// 008f6e5f  83c408               add esp, 8
// 008f6e62  e989faffff           jmp 0x8f68f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
