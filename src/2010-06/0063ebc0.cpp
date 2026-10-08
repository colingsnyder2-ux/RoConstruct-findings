// roc 2010-06 0063ebc0  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0063ebc0
//
// 0063ebc0  68707c4500           push 0x457c70
// 0063ebc5  68e01dc000           push 0xc01de0
// 0063ebca  e8c12adcff           call 0x401690
// 0063ebcf  83c408               add esp, 8
// 0063ebd2  e98973e1ff           jmp 0x455f60
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
