// roc 2008-06 005e31b0  unit: RBX::VGlue::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e31b0
//
// 005e31b0  687c149700           push 0x97147c
// 005e31b5  6840c34a00           push 0x4ac340
// 005e31ba  e87141f7ff           call 0x557330
// 005e31bf  83c408               add esp, 8
// 005e31c2  e97980ecff           jmp 0x4ab240
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
