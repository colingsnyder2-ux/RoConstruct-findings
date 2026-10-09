// roc 2009-12 006d5060  unit: RBX::AxisRotateTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5060
//
// 006d5060  68704a6d00           push 0x6d4a70
// 006d5065  68702db900           push 0xb92d70
// 006d506a  e8c1c5d2ff           call 0x401630
// 006d506f  83c408               add esp, 8
// 006d5072  e969f7ffff           jmp 0x6d47e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
