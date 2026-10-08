// roc 2009-06 0040b9c0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b9c0
//
// 0040b9c0  6810964000           push 0x409610
// 0040b9c5  682898a300           push 0xa39828
// 0040b9ca  e8415dffff           call 0x401710
// 0040b9cf  83c408               add esp, 8
// 0040b9d2  e9e9d8ffff           jmp 0x4092c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
