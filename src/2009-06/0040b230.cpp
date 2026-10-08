// roc 2009-06 0040b230  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b230
//
// 0040b230  68e0954000           push 0x4095e0
// 0040b235  681c98a300           push 0xa3981c
// 0040b23a  e8d164ffff           call 0x401710
// 0040b23f  83c408               add esp, 8
// 0040b242  e929dfffff           jmp 0x409170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
