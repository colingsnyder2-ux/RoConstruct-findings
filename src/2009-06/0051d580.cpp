// roc 2009-06 0051d580  unit: RBX::VBlockMesh::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051d580
//
// 0051d580  6840745100           push 0x517440
// 0051d585  683413a400           push 0xa41334
// 0051d58a  e88141eeff           call 0x401710
// 0051d58f  83c408               add esp, 8
// 0051d592  e9e990ffff           jmp 0x516680
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
