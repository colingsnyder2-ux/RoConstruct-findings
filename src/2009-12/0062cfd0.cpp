// roc 2009-12 0062cfd0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cfd0
//
// 0062cfd0  68f0164000           push 0x4016f0
// 0062cfd5  682094b700           push 0xb79420
// 0062cfda  e85146ddff           call 0x401630
// 0062cfdf  83c408               add esp, 8
// 0062cfe2  e9b943ddff           jmp 0x4013a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
