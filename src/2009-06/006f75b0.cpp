// roc 2009-06 006f75b0  unit: RBX::GroupDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f75b0
//
// 006f75b0  6850716f00           push 0x6f7150
// 006f75b5  680003a500           push 0xa50300
// 006f75ba  e851a1d0ff           call 0x401710
// 006f75bf  83c408               add esp, 8
// 006f75c2  e919fbffff           jmp 0x6f70e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
