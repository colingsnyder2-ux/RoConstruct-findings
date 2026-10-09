// roc 2009-12 006d5450  unit: RBX::WeldTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d5450
//
// 006d5450  6820496d00           push 0x6d4920
// 006d5455  681c2db900           push 0xb92d1c
// 006d545a  e8d1c1d2ff           call 0x401630
// 006d545f  83c408               add esp, 8
// 006d5462  e949eaffff           jmp 0x6d3eb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
