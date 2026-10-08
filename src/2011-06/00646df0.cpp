// roc 2011-06 00646df0  unit: RBX::VBasePlayerGui::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00646df0
//
// 00646df0  68a0584a00           push 0x4a58a0
// 00646df5  68d053cb00           push 0xcb53d0
// 00646dfa  e811a8dbff           call 0x401610
// 00646dff  83c408               add esp, 8
// 00646e02  e999cee5ff           jmp 0x4a3ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
