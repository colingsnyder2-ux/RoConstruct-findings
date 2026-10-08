// roc 2007-08 00549bd0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00549bd0
//
// 00549bd0  68141b8c00           push 0x8c1b14
// 00549bd5  68809a5400           push 0x549a80
// 00549bda  e841b91d00           call 0x725520
// 00549bdf  83c408               add esp, 8
// 00549be2  e9b9fdffff           jmp 0x5499a0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
