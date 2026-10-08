// roc 2009-06 006279a0  unit: RBX::ToolMouseCommand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006279a0
//
// 006279a0  6810716200           push 0x627110
// 006279a5  6800b6a400           push 0xa4b600
// 006279aa  e8619dddff           call 0x401710
// 006279af  83c408               add esp, 8
// 006279b2  e989f5ffff           jmp 0x626f40
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
