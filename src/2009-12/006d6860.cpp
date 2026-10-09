// roc 2009-12 006d6860  unit: RBX::SlingshotTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6860
//
// 006d6860  68d0496d00           push 0x6d49d0
// 006d6865  68482db900           push 0xb92d48
// 006d686a  e8c1add2ff           call 0x401630
// 006d686f  83c408               add esp, 8
// 006d6872  e909dbffff           jmp 0x6d4380
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
