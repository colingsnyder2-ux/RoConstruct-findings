// roc 2009-06 0064dac0  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064dac0
//
// 0064dac0  68506b4400           push 0x446b50
// 0064dac5  68e4b1a300           push 0xa3b1e4
// 0064daca  e8413cdbff           call 0x401710
// 0064dacf  83c408               add esp, 8
// 0064dad2  e92980dfff           jmp 0x445b00
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
