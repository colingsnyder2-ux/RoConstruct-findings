// roc 2010-06 006c0a20  unit: RBX::VDebrisService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c0a20
//
// 006c0a20  68e0c35a00           push 0x5ac3e0
// 006c0a25  68b8c1c000           push 0xc0c1b8
// 006c0a2a  e8610cd4ff           call 0x401690
// 006c0a2f  83c408               add esp, 8
// 006c0a32  e9b9a1eeff           jmp 0x5aabf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
