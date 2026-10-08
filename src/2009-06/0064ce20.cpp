// roc 2009-06 0064ce20  unit: RBX::VGameSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064ce20
//
// 0064ce20  68406b4400           push 0x446b40
// 0064ce25  68e0b1a300           push 0xa3b1e0
// 0064ce2a  e8e148dbff           call 0x401710
// 0064ce2f  83c408               add esp, 8
// 0064ce32  e9598cdfff           jmp 0x445a90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
