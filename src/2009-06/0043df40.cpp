// roc 2009-06 0043df40  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043df40
//
// 0043df40  68b0954000           push 0x4095b0
// 0043df45  681098a300           push 0xa39810
// 0043df4a  e8c137fcff           call 0x401710
// 0043df4f  83c408               add esp, 8
// 0043df52  e9c9b0fcff           jmp 0x409020
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
