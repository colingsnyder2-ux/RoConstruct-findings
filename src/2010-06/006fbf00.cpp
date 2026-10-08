// roc 2010-06 006fbf00  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fbf00
//
// 006fbf00  68f0be6f00           push 0x6fbef0
// 006fbf05  688c1ec200           push 0xc21e8c
// 006fbf0a  e88157d0ff           call 0x401690
// 006fbf0f  83c408               add esp, 8
// 006fbf12  e969ffffff           jmp 0x6fbe80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
