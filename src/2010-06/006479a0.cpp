// roc 2010-06 006479a0  unit: RBX::LeftMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006479a0
//
// 006479a0  6880676400           push 0x646780
// 006479a5  6884b8c100           push 0xc1b884
// 006479aa  e8e19cdbff           call 0x401690
// 006479af  83c408               add esp, 8
// 006479b2  e999e5ffff           jmp 0x645f50
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
