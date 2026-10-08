// roc 2008-06 005c7cb0  unit: RBX::RocketTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c7cb0
//
// 005c7cb0  6880969700           push 0x979680
// 005c7cb5  68b0615c00           push 0x5c61b0
// 005c7cba  e871f6f8ff           call 0x557330
// 005c7cbf  83c408               add esp, 8
// 005c7cc2  e959dfffff           jmp 0x5c5c20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
