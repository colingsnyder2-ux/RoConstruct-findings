// roc 2007-08 00424c10  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424c10
//
// 00424c10  68e8b48b00           push 0x8bb4e8
// 00424c15  68104a4200           push 0x424a10
// 00424c1a  e801093000           call 0x725520
// 00424c1f  83c408               add esp, 8
// 00424c22  e969fdffff           jmp 0x424990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
