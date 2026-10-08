// roc 2008-06 005c6ac0  unit: RBX::StudsTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6ac0
//
// 005c6ac0  6858969700           push 0x979658
// 005c6ac5  6810615c00           push 0x5c6110
// 005c6aca  e86108f9ff           call 0x557330
// 005c6acf  83c408               add esp, 8
// 005c6ad2  e9e9ecffff           jmp 0x5c57c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
