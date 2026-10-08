// roc 2009-06 00665380  unit: RBX::VExtrudedPartInstance::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00665380
//
// 00665380  68e0db4700           push 0x47dbe0
// 00665385  6828c6a300           push 0xa3c628
// 0066538a  e881c3d9ff           call 0x401710
// 0066538f  83c408               add esp, 8
// 00665392  e97983e1ff           jmp 0x47d710
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
