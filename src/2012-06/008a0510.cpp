// roc 2012-06 008a0510  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a0510
//
// 008a0510  68e0f88900           push 0x89f8e0
// 008a0515  685c27e500           push 0xe5275c
// 008a051a  e88110b6ff           call 0x4015a0
// 008a051f  83c408               add esp, 8
// 008a0522  e949f2ffff           jmp 0x89f770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
