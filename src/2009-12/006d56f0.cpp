// roc 2009-12 006d56f0  unit: RBX::InletTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d56f0
//
// 006d56f0  6840496d00           push 0x6d4940
// 006d56f5  68242db900           push 0xb92d24
// 006d56fa  e831bfd2ff           call 0x401630
// 006d56ff  83c408               add esp, 8
// 006d5702  e989e8ffff           jmp 0x6d3f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
