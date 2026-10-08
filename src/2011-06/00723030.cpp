// roc 2011-06 00723030  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00723030
//
// 00723030  68407f5e00           push 0x5e7f40
// 00723035  6888b5cc00           push 0xccb588
// 0072303a  e8d1e5cdff           call 0x401610
// 0072303f  83c408               add esp, 8
// 00723042  e9f941ecff           jmp 0x5e7240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
