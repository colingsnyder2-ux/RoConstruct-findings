// roc 2011-06 00694db0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00694db0
//
// 00694db0  6870594a00           push 0x4a5970
// 00694db5  680454cb00           push 0xcb5404
// 00694dba  e851c8d6ff           call 0x401610
// 00694dbf  83c408               add esp, 8
// 00694dc2  e989f4e0ff           jmp 0x4a4250
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
