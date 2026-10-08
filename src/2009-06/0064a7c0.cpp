// roc 2009-06 0064a7c0  unit: RBX::VDecal::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064a7c0
//
// 0064a7c0  68f0214300           push 0x4321f0
// 0064a7c5  680ca3a300           push 0xa3a30c
// 0064a7ca  e8416fdbff           call 0x401710
// 0064a7cf  83c408               add esp, 8
// 0064a7d2  e9996fdeff           jmp 0x431770
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
