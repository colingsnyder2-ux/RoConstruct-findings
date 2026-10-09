// roc 2009-12 00738050  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00738050
//
// 00738050  68c0996400           push 0x6499c0
// 00738055  680460b800           push 0xb86004
// 0073805a  e8d195ccff           call 0x401630
// 0073805f  83c408               add esp, 8
// 00738062  e9b907f1ff           jmp 0x648820
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
