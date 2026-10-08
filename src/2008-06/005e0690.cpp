// roc 2008-06 005e0690  unit: RBX::VLighting::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0690
//
// 005e0690  6870149700           push 0x971470
// 005e0695  6810c34a00           push 0x4ac310
// 005e069a  e8916cf7ff           call 0x557330
// 005e069f  83c408               add esp, 8
// 005e06a2  e949aaecff           jmp 0x4ab0f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
