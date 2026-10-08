// roc 2010-06 0059a780  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059a780
//
// 0059a780  6880214000           push 0x402180
// 0059a785  68d4fabf00           push 0xbffad4
// 0059a78a  e8016fe6ff           call 0x401690
// 0059a78f  83c408               add esp, 8
// 0059a792  e90978e6ff           jmp 0x401fa0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
