// roc 2010-06 006960c0  unit: RBX::VRotateV::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006960c0
//
// 006960c0  68006e4e00           push 0x4e6e00
// 006960c5  688066c000           push 0xc06680
// 006960ca  e8c1b5d6ff           call 0x401690
// 006960cf  83c408               add esp, 8
// 006960d2  e979fce4ff           jmp 0x4e5d50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
