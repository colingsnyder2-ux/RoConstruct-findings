// roc 2009-12 0040b8a0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040b8a0
//
// 0040b8a0  6890954000           push 0x409590
// 0040b8a5  681896b700           push 0xb79618
// 0040b8aa  e8815dffff           call 0x401630
// 0040b8af  83c408               add esp, 8
// 0040b8b2  e999d9ffff           jmp 0x409250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
