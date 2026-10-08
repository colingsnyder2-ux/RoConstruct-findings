// roc 2008-06 005c79b0  unit: RBX::HammerTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c79b0
//
// 005c79b0  6888969700           push 0x979688
// 005c79b5  68d0615c00           push 0x5c61d0
// 005c79ba  e871f9f8ff           call 0x557330
// 005c79bf  83c408               add esp, 8
// 005c79c2  e939e3ffff           jmp 0x5c5d00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
