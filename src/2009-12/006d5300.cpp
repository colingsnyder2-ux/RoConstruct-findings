// roc 2009-12 006d5300  unit: RBX::GlueTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5300
//
// 006d5300  6810496d00           push 0x6d4910
// 006d5305  68182db900           push 0xb92d18
// 006d530a  e821c3d2ff           call 0x401630
// 006d530f  83c408               add esp, 8
// 006d5312  e929ebffff           jmp 0x6d3e40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
