// roc 2012-06 00793480  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00793480
//
// 00793480  68e0654900           push 0x4965e0
// 00793485  6808a9e100           push 0xe1a908
// 0079348a  e811e1c6ff           call 0x4015a0
// 0079348f  83c408               add esp, 8
// 00793492  e9f925d0ff           jmp 0x495a90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
