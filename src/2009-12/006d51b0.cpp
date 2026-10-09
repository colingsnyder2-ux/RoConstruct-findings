// roc 2009-12 006d51b0  unit: RBX::FlatTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d51b0
//
// 006d51b0  6800496d00           push 0x6d4900
// 006d51b5  68142db900           push 0xb92d14
// 006d51ba  e871c4d2ff           call 0x401630
// 006d51bf  83c408               add esp, 8
// 006d51c2  e909ecffff           jmp 0x6d3dd0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
