// roc 2012-06 00812660  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00812660
//
// 00812660  68e0198100           push 0x8119e0
// 00812665  68b802e500           push 0xe502b8
// 0081266a  e831efbeff           call 0x4015a0
// 0081266f  83c408               add esp, 8
// 00812672  e9b9f0ffff           jmp 0x811730
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
