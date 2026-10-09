// roc 2009-12 006fc470  unit: RBX::VStarterGuiService::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006fc470
//
// 006fc470  68a0684f00           push 0x4f68a0
// 006fc475  685cdeb700           push 0xb7de5c
// 006fc47a  e8b151d0ff           call 0x401630
// 006fc47f  83c408               add esp, 8
// 006fc482  e9e993dfff           jmp 0x4f5870
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
