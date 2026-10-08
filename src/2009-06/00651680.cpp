// roc 2009-06 00651680  unit: RBX::VVisit::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00651680
//
// 00651680  6880ed4400           push 0x44ed80
// 00651685  6898b3a300           push 0xa3b398
// 0065168a  e88100dbff           call 0x401710
// 0065168f  83c408               add esp, 8
// 00651692  e939bedfff           jmp 0x44d4d0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
