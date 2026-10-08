// roc 2009-06 006576e0  unit: RBX::Stats::VItem::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006576e0
//
// 006576e0  68d0766500           push 0x6576d0
// 006576e5  682ccaa400           push 0xa4ca2c
// 006576ea  e821a0daff           call 0x401710
// 006576ef  83c408               add esp, 8
// 006576f2  e959ffffff           jmp 0x657650
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
