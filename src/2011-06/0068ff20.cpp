// roc 2011-06 0068ff20  unit: RBX::VGuiImageButton::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068ff20
//
// 0068ff20  68c0584a00           push 0x4a58c0
// 0068ff25  68d853cb00           push 0xcb53d8
// 0068ff2a  e8e116d7ff           call 0x401610
// 0068ff2f  83c408               add esp, 8
// 0068ff32  e9493ee1ff           jmp 0x4a3d80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
