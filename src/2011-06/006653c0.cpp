// roc 2011-06 006653c0  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006653c0
//
// 006653c0  68e03a4600           push 0x463ae0
// 006653c5  68743bcb00           push 0xcb3b74
// 006653ca  e841c2d9ff           call 0x401610
// 006653cf  83c408               add esp, 8
// 006653d2  e9b9d4dfff           jmp 0x462890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
