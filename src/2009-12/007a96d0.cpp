// roc 2009-12 007a96d0  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a96d0
//
// 007a96d0  68304a6d00           push 0x6d4a30
// 007a96d5  68602db900           push 0xb92d60
// 007a96da  e8517fc5ff           call 0x401630
// 007a96df  83c408               add esp, 8
// 007a96e2  e939aff2ff           jmp 0x6d4620
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
