// roc 2012-06 00783c30  unit: RBX::BindableFunction  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00783c30
//
// 00783c30  6860086e00           push 0x6e0860
// 00783c35  68fcfce200           push 0xe2fcfc
// 00783c3a  e861d9c7ff           call 0x4015a0
// 00783c3f  83c408               add esp, 8
// 00783c42  e9b9cbf5ff           jmp 0x6e0800
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
