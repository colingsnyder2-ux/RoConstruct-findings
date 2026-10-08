// roc 2010-06 006472c0  unit: RBX::WeldTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006472c0
//
// 006472c0  6820676400           push 0x646720
// 006472c5  686cb8c100           push 0xc1b86c
// 006472ca  e8c1a3dbff           call 0x401690
// 006472cf  83c408               add esp, 8
// 006472d2  e9d9e9ffff           jmp 0x645cb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
