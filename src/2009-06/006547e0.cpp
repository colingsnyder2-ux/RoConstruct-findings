// roc 2009-06 006547e0  unit: RBX::RightMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006547e0
//
// 006547e0  68b0346500           push 0x6534b0
// 006547e5  687cc7a400           push 0xa4c77c
// 006547ea  e821cfdaff           call 0x401710
// 006547ef  83c408               add esp, 8
// 006547f2  e919e4ffff           jmp 0x652c10
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
