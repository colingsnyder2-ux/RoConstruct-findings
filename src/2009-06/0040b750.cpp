// roc 2009-06 0040b750  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b750
//
// 0040b750  6800964000           push 0x409600
// 0040b755  682498a300           push 0xa39824
// 0040b75a  e8b15fffff           call 0x401710
// 0040b75f  83c408               add esp, 8
// 0040b762  e9e9daffff           jmp 0x409250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
