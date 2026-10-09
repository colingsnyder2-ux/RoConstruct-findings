// roc 2009-12 007a9400  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a9400
//
// 007a9400  68204a6d00           push 0x6d4a20
// 007a9405  685c2db900           push 0xb92d5c
// 007a940a  e82182c5ff           call 0x401630
// 007a940f  83c408               add esp, 8
// 007a9412  e999b1f2ff           jmp 0x6d45b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
