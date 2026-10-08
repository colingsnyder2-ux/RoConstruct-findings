// roc 2011-06 0065e1d0  unit: RBX::VLuaSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0065e1d0
//
// 0065e1d0  68d0b54500           push 0x45b5d0
// 0065e1d5  689c39cb00           push 0xcb399c
// 0065e1da  e83134daff           call 0x401610
// 0065e1df  83c408               add esp, 8
// 0065e1e2  e9f9c0dfff           jmp 0x45a2e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
