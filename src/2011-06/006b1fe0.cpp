// roc 2011-06 006b1fe0  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b1fe0
//
// 006b1fe0  68d01f6b00           push 0x6b1fd0
// 006b1fe5  689400cd00           push 0xcd0094
// 006b1fea  e821f6d4ff           call 0x401610
// 006b1fef  83c408               add esp, 8
// 006b1ff2  e959ffffff           jmp 0x6b1f50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
