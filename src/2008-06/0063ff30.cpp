// roc 2008-06 0063ff30  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ff30
//
// 0063ff30  6894969700           push 0x979694
// 0063ff35  6800625c00           push 0x5c6200
// 0063ff3a  e8f173f1ff           call 0x557330
// 0063ff3f  83c408               add esp, 8
// 0063ff42  e9095ff8ff           jmp 0x5c5e50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
