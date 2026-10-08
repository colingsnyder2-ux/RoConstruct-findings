// roc 2008-06 005c7360  unit: RBX::LockTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7360
//
// 005c7360  6878969700           push 0x979678
// 005c7365  6890615c00           push 0x5c6190
// 005c736a  e8c1fff8ff           call 0x557330
// 005c736f  83c408               add esp, 8
// 005c7372  e9c9e7ffff           jmp 0x5c5b40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
