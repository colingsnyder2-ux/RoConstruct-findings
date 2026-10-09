// roc 2009-12 007602b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007602b0
//
// 007602b0  6840017600           push 0x760140
// 007602b5  68bc7ab900           push 0xb97abc
// 007602ba  e87113caff           call 0x401630
// 007602bf  83c408               add esp, 8
// 007602c2  e969fdffff           jmp 0x760030
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
