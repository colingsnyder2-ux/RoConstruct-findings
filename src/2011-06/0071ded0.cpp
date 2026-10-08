// roc 2011-06 0071ded0  unit: RBX::VAdvLuaDragger::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ded0
//
// 0071ded0  6870155c00           push 0x5c1570
// 0071ded5  6868e6cb00           push 0xcbe668
// 0071deda  e83137ceff           call 0x401610
// 0071dedf  83c408               add esp, 8
// 0071dee2  e9b92deaff           jmp 0x5c0ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
