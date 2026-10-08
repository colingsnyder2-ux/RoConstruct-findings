// roc 2009-06 006cc240  unit: RBX::GrabTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006cc240
//
// 006cc240  6860356500           push 0x653560
// 006cc245  68a8c7a400           push 0xa4c7a8
// 006cc24a  e8c154d3ff           call 0x401710
// 006cc24f  83c408               add esp, 8
// 006cc252  e9896ef8ff           jmp 0x6530e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
