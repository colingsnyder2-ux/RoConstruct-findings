// roc 2011-06 007eb4b0  unit: RBX::PartDropTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007eb4b0
//
// 007eb4b0  68d0b27e00           push 0x7eb2d0
// 007eb4b5  68185fcd00           push 0xcd5f18
// 007eb4ba  e85161c1ff           call 0x401610
// 007eb4bf  83c408               add esp, 8
// 007eb4c2  e919fcffff           jmp 0x7eb0e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
