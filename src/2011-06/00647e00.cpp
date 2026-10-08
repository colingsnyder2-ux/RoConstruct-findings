// roc 2011-06 00647e00  unit: RBX::VAccoutrement::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00647e00
//
// 00647e00  6870254300           push 0x432570
// 00647e05  680827cb00           push 0xcb2708
// 00647e0a  e80198dbff           call 0x401610
// 00647e0f  83c408               add esp, 8
// 00647e12  e98990deff           jmp 0x430ea0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
