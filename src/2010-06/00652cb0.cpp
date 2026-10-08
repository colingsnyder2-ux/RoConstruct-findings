// roc 2010-06 00652cb0  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00652cb0
//
// 00652cb0  68907d4600           push 0x467d90
// 00652cb5  68c41fc000           push 0xc01fc4
// 00652cba  e8d1e9daff           call 0x401690
// 00652cbf  83c408               add esp, 8
// 00652cc2  e91945e1ff           jmp 0x4671e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
