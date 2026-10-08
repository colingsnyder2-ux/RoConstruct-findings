// roc 2008-06 005c64c0  unit: RBX::ResizeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c64c0
//
// 005c64c0  6884969700           push 0x979684
// 005c64c5  68c0615c00           push 0x5c61c0
// 005c64ca  e8610ef9ff           call 0x557330
// 005c64cf  83c408               add esp, 8
// 005c64d2  e9b9f7ffff           jmp 0x5c5c90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
