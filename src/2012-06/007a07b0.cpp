// roc 2012-06 007a07b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a07b0
//
// 007a07b0  6810664900           push 0x496610
// 007a07b5  6814a9e100           push 0xe1a914
// 007a07ba  e8e10dc6ff           call 0x4015a0
// 007a07bf  83c408               add esp, 8
// 007a07c2  e91954cfff           jmp 0x495be0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
