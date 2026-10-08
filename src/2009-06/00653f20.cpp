// roc 2009-06 00653f20  unit: RBX::FlatTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653f20
//
// 00653f20  6840346500           push 0x653440
// 00653f25  6860c7a400           push 0xa4c760
// 00653f2a  e8e1d7daff           call 0x401710
// 00653f2f  83c408               add esp, 8
// 00653f32  e9c9e9ffff           jmp 0x652900
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
