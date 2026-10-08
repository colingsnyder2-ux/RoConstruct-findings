// roc 2011-06 0068f830  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068f830
//
// 0068f830  68b0584a00           push 0x4a58b0
// 0068f835  68d453cb00           push 0xcb53d4
// 0068f83a  e8d11dd7ff           call 0x401610
// 0068f83f  83c408               add esp, 8
// 0068f842  e9c944e1ff           jmp 0x4a3d10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
