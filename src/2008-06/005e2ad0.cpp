// roc 2008-06 005e2ad0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2ad0
//
// 005e2ad0  68d8aa9700           push 0x97aad8
// 005e2ad5  6810295e00           push 0x5e2910
// 005e2ada  e85148f7ff           call 0x557330
// 005e2adf  83c408               add esp, 8
// 005e2ae2  e959fdffff           jmp 0x5e2840
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
