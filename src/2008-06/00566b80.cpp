// roc 2008-06 00566b80  unit: RBX::VSelection::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566b80
//
// 00566b80  6814c39600           push 0x96c314
// 00566b85  68c06e4000           push 0x406ec0
// 00566b8a  e8a107ffff           call 0x557330
// 00566b8f  83c408               add esp, 8
// 00566b92  e929fde9ff           jmp 0x4068c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
