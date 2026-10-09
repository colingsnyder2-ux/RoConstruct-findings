// roc 2009-12 0040b640  unit: RBX::Reflection::Metadata::VEvents::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040b640
//
// 0040b640  6880954000           push 0x409580
// 0040b645  681496b700           push 0xb79614
// 0040b64a  e8e15fffff           call 0x401630
// 0040b64f  83c408               add esp, 8
// 0040b652  e989dbffff           jmp 0x4091e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
