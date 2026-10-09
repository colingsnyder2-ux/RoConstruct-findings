// roc 2009-12 006d5e00  unit: RBX::AnchorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5e00
//
// 006d5e00  68b0496d00           push 0x6d49b0
// 006d5e05  68402db900           push 0xb92d40
// 006d5e0a  e821b8d2ff           call 0x401630
// 006d5e0f  83c408               add esp, 8
// 006d5e12  e989e4ffff           jmp 0x6d42a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
