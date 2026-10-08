// roc 2008-06 00597e20  unit: RBX::VTexture::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597e20
//
// 00597e20  68c0d09600           push 0x96d0c0
// 00597e25  68c0e04100           push 0x41e0c0
// 00597e2a  e801f5fbff           call 0x557330
// 00597e2f  83c408               add esp, 8
// 00597e32  e95960e8ff           jmp 0x41de90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
