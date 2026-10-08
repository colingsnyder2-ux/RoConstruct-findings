// roc 2008-06 00640450  unit: RBX::GameTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640450
//
// 00640450  689c969700           push 0x97969c
// 00640455  6820625c00           push 0x5c6220
// 0064045a  e8d16ef1ff           call 0x557330
// 0064045f  83c408               add esp, 8
// 00640462  e9c95af8ff           jmp 0x5c5f30
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
