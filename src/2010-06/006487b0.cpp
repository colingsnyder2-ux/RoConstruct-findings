// roc 2010-06 006487b0  unit: RBX::RocketTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006487b0
//
// 006487b0  68e0676400           push 0x6467e0
// 006487b5  689cb8c100           push 0xc1b89c
// 006487ba  e8d18edbff           call 0x401690
// 006487bf  83c408               add esp, 8
// 006487c2  e929daffff           jmp 0x6461f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
