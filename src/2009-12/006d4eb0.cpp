// roc 2009-12 006d4eb0  unit: RBX::AxisMoveTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d4eb0
//
// 006d4eb0  68604a6d00           push 0x6d4a60
// 006d4eb5  686c2db900           push 0xb92d6c
// 006d4eba  e871c7d2ff           call 0x401630
// 006d4ebf  83c408               add esp, 8
// 006d4ec2  e9a9f8ffff           jmp 0x6d4770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
