// roc 2010-06 006d8d30  unit: RBX::VSmoke::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006d8d30
//
// 006d8d30  6870c55a00           push 0x5ac570
// 006d8d35  681cc2c000           push 0xc0c21c
// 006d8d3a  e85189d2ff           call 0x401690
// 006d8d3f  83c408               add esp, 8
// 006d8d42  e99929edff           jmp 0x5ab6e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
