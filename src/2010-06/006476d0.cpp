// roc 2010-06 006476d0  unit: RBX::UniversalTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006476d0
//
// 006476d0  6850676400           push 0x646750
// 006476d5  6878b8c100           push 0xc1b878
// 006476da  e8b19fdbff           call 0x401690
// 006476df  83c408               add esp, 8
// 006476e2  e919e7ffff           jmp 0x645e00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
