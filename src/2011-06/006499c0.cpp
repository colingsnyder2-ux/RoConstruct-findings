// roc 2011-06 006499c0  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006499c0
//
// 006499c0  6890254300           push 0x432590
// 006499c5  681027cb00           push 0xcb2710
// 006499ca  e8417cdbff           call 0x401610
// 006499cf  83c408               add esp, 8
// 006499d2  e9a975deff           jmp 0x430f80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
