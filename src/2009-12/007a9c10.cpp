// roc 2009-12 007a9c10  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a9c10
//
// 007a9c10  68504a6d00           push 0x6d4a50
// 007a9c15  68682db900           push 0xb92d68
// 007a9c1a  e8117ac5ff           call 0x401630
// 007a9c1f  83c408               add esp, 8
// 007a9c22  e9d9aaf2ff           jmp 0x6d4700
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
