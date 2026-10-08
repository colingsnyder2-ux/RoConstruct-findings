// roc 2007-08 0059a590  unit: RBX::VCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a590
//
// 0059a590  68d4bf8b00           push 0x8bbfd4
// 0059a595  6880864500           push 0x458680
// 0059a59a  e881af1800           call 0x725520
// 0059a59f  83c408               add esp, 8
// 0059a5a2  e949dcebff           jmp 0x4581f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
