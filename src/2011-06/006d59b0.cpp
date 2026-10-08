// roc 2011-06 006d59b0  unit: RBX::VManualWeld::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d59b0
//
// 006d59b0  6810574f00           push 0x4f5710
// 006d59b5  680083cb00           push 0xcb8300
// 006d59ba  e851bcd2ff           call 0x401610
// 006d59bf  83c408               add esp, 8
// 006d59c2  e959ebe1ff           jmp 0x4f4520
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
