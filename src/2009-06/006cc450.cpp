// roc 2009-06 006cc450  unit: RBX::CloneTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cc450
//
// 006cc450  6870356500           push 0x653570
// 006cc455  68acc7a400           push 0xa4c7ac
// 006cc45a  e8b152d3ff           call 0x401710
// 006cc45f  83c408               add esp, 8
// 006cc462  e9e96cf8ff           jmp 0x653150
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
