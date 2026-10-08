// roc 2008-06 005c66b0  unit: RBX::FlatTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c66b0
//
// 005c66b0  684c969700           push 0x97964c
// 005c66b5  68e0605c00           push 0x5c60e0
// 005c66ba  e8710cf9ff           call 0x557330
// 005c66bf  83c408               add esp, 8
// 005c66c2  e9a9efffff           jmp 0x5c5670
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
