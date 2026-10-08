// roc 2011-06 0050a4d0  unit: RBX::Network::VIdSerializer::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0050a4d0
//
// 0050a4d0  68c0a45000           push 0x50a4c0
// 0050a4d5  689083cb00           push 0xcb8390
// 0050a4da  e83171efff           call 0x401610
// 0050a4df  83c408               add esp, 8
// 0050a4e2  e959ffffff           jmp 0x50a440
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
