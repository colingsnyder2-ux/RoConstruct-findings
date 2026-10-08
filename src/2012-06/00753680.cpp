// roc 2012-06 00753680  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00753680
//
// 00753680  68301b7500           push 0x751b30
// 00753685  681464e300           push 0xe36414
// 0075368a  e811dfcaff           call 0x4015a0
// 0075368f  83c408               add esp, 8
// 00753692  e909d6ffff           jmp 0x750ca0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
