// roc 2011-06 006463e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006463e0
//
// 006463e0  68505e6400           push 0x645e50
// 006463e5  68a0cdcc00           push 0xcccda0
// 006463ea  e821b2dbff           call 0x401610
// 006463ef  83c408               add esp, 8
// 006463f2  e9b9f8ffff           jmp 0x645cb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
