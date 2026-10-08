// roc 2009-06 006539e0  unit: RBX::AxisMoveTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006539e0
//
// 006539e0  68a0356500           push 0x6535a0
// 006539e5  68b8c7a400           push 0xa4c7b8
// 006539ea  e821dddaff           call 0x401710
// 006539ef  83c408               add esp, 8
// 006539f2  e9a9f8ffff           jmp 0x6532a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
