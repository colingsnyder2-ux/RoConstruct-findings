// roc 2009-06 0040b4f0  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040b4f0
//
// 0040b4f0  68f0954000           push 0x4095f0
// 0040b4f5  682098a300           push 0xa39820
// 0040b4fa  e81162ffff           call 0x401710
// 0040b4ff  83c408               add esp, 8
// 0040b502  e9d9dcffff           jmp 0x4091e0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
