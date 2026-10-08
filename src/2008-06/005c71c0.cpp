// roc 2008-06 005c71c0  unit: RBX::ModelSetPrimaryPartTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c71c0
//
// 005c71c0  6848969700           push 0x979648
// 005c71c5  68d0605c00           push 0x5c60d0
// 005c71ca  e86101f9ff           call 0x557330
// 005c71cf  83c408               add esp, 8
// 005c71d2  e929e4ffff           jmp 0x5c5600
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
