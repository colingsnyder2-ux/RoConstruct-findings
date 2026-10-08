// roc 2009-06 00653840  unit: RBX::ResizeTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00653840
//
// 00653840  6830356500           push 0x653530
// 00653845  689cc7a400           push 0xa4c79c
// 0065384a  e8c1dedaff           call 0x401710
// 0065384f  83c408               add esp, 8
// 00653852  e939f7ffff           jmp 0x652f90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
