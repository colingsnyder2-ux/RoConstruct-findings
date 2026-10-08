// roc 2009-06 006b8050  unit: RBX::NullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b8050
//
// 006b8050  6880356500           push 0x653580
// 006b8055  68b0c7a400           push 0xa4c7b0
// 006b805a  e8b196d4ff           call 0x401710
// 006b805f  83c408               add esp, 8
// 006b8062  e959b1f9ff           jmp 0x6531c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
