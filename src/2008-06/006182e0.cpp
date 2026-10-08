// roc 2008-06 006182e0  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006182e0
//
// 006182e0  680cbf9700           push 0x97bf0c
// 006182e5  68f0816100           push 0x6181f0
// 006182ea  e841f0f3ff           call 0x557330
// 006182ef  83c408               add esp, 8
// 006182f2  e9a9fdffff           jmp 0x6180a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
