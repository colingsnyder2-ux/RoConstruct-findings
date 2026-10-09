// roc 2009-12 006d6250  unit: RBX::DropperTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d6250
//
// 006d6250  68e0486d00           push 0x6d48e0
// 006d6255  680c2db900           push 0xb92d0c
// 006d625a  e8d1b3d2ff           call 0x401630
// 006d625f  83c408               add esp, 8
// 006d6262  e989daffff           jmp 0x6d3cf0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
