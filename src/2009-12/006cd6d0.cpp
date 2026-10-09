// roc 2009-12 006cd6d0  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cd6d0
//
// 006cd6d0  6840c06c00           push 0x6cc040
// 006cd6d5  68402bb900           push 0xb92b40
// 006cd6da  e8513fd3ff           call 0x401630
// 006cd6df  83c408               add esp, 8
// 006cd6e2  e989ddffff           jmp 0x6cb470
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
