// roc 2010-06 006fbe60  unit: RBX::VGuiObject::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006fbe60
//
// 006fbe60  6850be6f00           push 0x6fbe50
// 006fbe65  68801ec200           push 0xc21e80
// 006fbe6a  e82158d0ff           call 0x401690
// 006fbe6f  83c408               add esp, 8
// 006fbe72  e959ffffff           jmp 0x6fbdd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
