// roc 2011-06 00648540  unit: RBX::VHat::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00648540
//
// 00648540  6880254300           push 0x432580
// 00648545  680c27cb00           push 0xcb270c
// 0064854a  e8c190dbff           call 0x401610
// 0064854f  83c408               add esp, 8
// 00648552  e9b989deff           jmp 0x430f10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
