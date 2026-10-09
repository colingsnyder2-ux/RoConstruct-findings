// roc 2009-12 006d5d10  unit: RBX::ModelSetFrontTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5d10
//
// 006d5d10  68a0496d00           push 0x6d49a0
// 006d5d15  683c2db900           push 0xb92d3c
// 006d5d1a  e811b9d2ff           call 0x401630
// 006d5d1f  83c408               add esp, 8
// 006d5d22  e909e5ffff           jmp 0x6d4230
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
