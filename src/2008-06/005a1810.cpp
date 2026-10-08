// roc 2008-06 005a1810  unit: RBX::DecalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1810
//
// 005a1810  68786a9700           push 0x976a78
// 005a1815  6820105a00           push 0x5a1020
// 005a181a  e8115bfbff           call 0x557330
// 005a181f  83c408               add esp, 8
// 005a1822  e989f7ffff           jmp 0x5a0fb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
