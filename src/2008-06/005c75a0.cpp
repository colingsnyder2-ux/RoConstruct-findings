// roc 2008-06 005c75a0  unit: RBX::DropperTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c75a0
//
// 005c75a0  6844969700           push 0x979644
// 005c75a5  68c0605c00           push 0x5c60c0
// 005c75aa  e881fdf8ff           call 0x557330
// 005c75af  83c408               add esp, 8
// 005c75b2  e9d9dfffff           jmp 0x5c5590
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
