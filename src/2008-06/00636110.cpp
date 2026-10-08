// roc 2008-06 00636110  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636110
//
// 00636110  6860cb9700           push 0x97cb60
// 00636115  6880356300           push 0x633580
// 0063611a  e81112f2ff           call 0x557330
// 0063611f  83c408               add esp, 8
// 00636122  e989d2ffff           jmp 0x6333b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
