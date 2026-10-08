// roc 2008-06 005e3290  unit: RBX::VRotate::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e3290
//
// 005e3290  6880149700           push 0x971480
// 005e3295  6850c34a00           push 0x4ac350
// 005e329a  e89140f7ff           call 0x557330
// 005e329f  83c408               add esp, 8
// 005e32a2  e90980ecff           jmp 0x4ab2b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
