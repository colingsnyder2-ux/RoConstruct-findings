// roc 2008-06 005a1830  unit: RBX::ArrowTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1830
//
// 005a1830  687c6a9700           push 0x976a7c
// 005a1835  68c0095a00           push 0x5a09c0
// 005a183a  e8f15afbff           call 0x557330
// 005a183f  83c408               add esp, 8
// 005a1842  e949ebffff           jmp 0x5a0390
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
