// roc 2008-06 005c6820  unit: RBX::GlueTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6820
//
// 005c6820  6850969700           push 0x979650
// 005c6825  68f0605c00           push 0x5c60f0
// 005c682a  e8010bf9ff           call 0x557330
// 005c682f  83c408               add esp, 8
// 005c6832  e9a9eeffff           jmp 0x5c56e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
