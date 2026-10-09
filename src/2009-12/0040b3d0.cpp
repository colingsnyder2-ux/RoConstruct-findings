// roc 2009-12 0040b3d0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040b3d0
//
// 0040b3d0  6870954000           push 0x409570
// 0040b3d5  681096b700           push 0xb79610
// 0040b3da  e85162ffff           call 0x401630
// 0040b3df  83c408               add esp, 8
// 0040b3e2  e989ddffff           jmp 0x409170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
