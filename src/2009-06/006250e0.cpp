// roc 2009-06 006250e0  unit: RBX::VStarterGear::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006250e0
//
// 006250e0  6850734100           push 0x417350
// 006250e5  6864a1a300           push 0xa3a164
// 006250ea  e821c6ddff           call 0x401710
// 006250ef  83c408               add esp, 8
// 006250f2  e94921dfff           jmp 0x417240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
