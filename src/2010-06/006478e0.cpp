// roc 2010-06 006478e0  unit: RBX::RightMotorTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006478e0
//
// 006478e0  6870676400           push 0x646770
// 006478e5  6880b8c100           push 0xc1b880
// 006478ea  e8a19ddbff           call 0x401690
// 006478ef  83c408               add esp, 8
// 006478f2  e9e9e5ffff           jmp 0x645ee0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
