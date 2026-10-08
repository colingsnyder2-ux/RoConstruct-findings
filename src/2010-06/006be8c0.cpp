// roc 2010-06 006be8c0  unit: RBX::VCollectionService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006be8c0
//
// 006be8c0  68b0c35a00           push 0x5ac3b0
// 006be8c5  68acc1c000           push 0xc0c1ac
// 006be8ca  e8c12dd4ff           call 0x401690
// 006be8cf  83c408               add esp, 8
// 006be8d2  e9c9c1eeff           jmp 0x5aaaa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
