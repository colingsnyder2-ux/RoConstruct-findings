// roc 2008-06 00640780  unit: RBX::AxisMoveTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640780
//
// 00640780  68a0969700           push 0x9796a0
// 00640785  6830625c00           push 0x5c6230
// 0064078a  e8a16bf1ff           call 0x557330
// 0064078f  83c408               add esp, 8
// 00640792  e90958f8ff           jmp 0x5c5fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
