// roc 2009-06 006f2f80  unit: RBX::PartDragTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f2f80
//
// 006f2f80  68b02b6f00           push 0x6f2bb0
// 006f2f85  685001a500           push 0xa50150
// 006f2f8a  e881e7d0ff           call 0x401710
// 006f2f8f  83c408               add esp, 8
// 006f2f92  e989fbffff           jmp 0x6f2b20
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
