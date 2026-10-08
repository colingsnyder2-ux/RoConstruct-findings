// roc 2009-06 006548a0  unit: RBX::LeftMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006548a0
//
// 006548a0  68c0346500           push 0x6534c0
// 006548a5  6880c7a400           push 0xa4c780
// 006548aa  e861cedaff           call 0x401710
// 006548af  83c408               add esp, 8
// 006548b2  e9c9e3ffff           jmp 0x652c80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
