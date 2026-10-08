// roc 2010-06 00720270  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00720270
//
// 00720270  6840686400           push 0x646840
// 00720275  68b4b8c100           push 0xc1b8b4
// 0072027a  e81114ceff           call 0x401690
// 0072027f  83c408               add esp, 8
// 00720282  e90962f2ff           jmp 0x646490
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
