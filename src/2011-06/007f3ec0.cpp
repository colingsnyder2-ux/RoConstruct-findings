// roc 2011-06 007f3ec0  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f3ec0
//
// 007f3ec0  68203b7f00           push 0x7f3b20
// 007f3ec5  680c61cd00           push 0xcd610c
// 007f3eca  e841d7c0ff           call 0x401610
// 007f3ecf  83c408               add esp, 8
// 007f3ed2  e9d9fbffff           jmp 0x7f3ab0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
