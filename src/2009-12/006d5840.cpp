// roc 2009-12 006d5840  unit: RBX::UniversalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5840
//
// 006d5840  6850496d00           push 0x6d4950
// 006d5845  68282db900           push 0xb92d28
// 006d584a  e8e1bdd2ff           call 0x401630
// 006d584f  83c408               add esp, 8
// 006d5852  e9a9e7ffff           jmp 0x6d4000
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
