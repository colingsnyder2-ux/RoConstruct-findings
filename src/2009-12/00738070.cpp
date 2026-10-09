// roc 2009-12 00738070  unit: RBX::VBodyPosition::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738070
//
// 00738070  68d0996400           push 0x6499d0
// 00738075  680860b800           push 0xb86008
// 0073807a  e8b195ccff           call 0x401630
// 0073807f  83c408               add esp, 8
// 00738082  e90908f1ff           jmp 0x648890
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
