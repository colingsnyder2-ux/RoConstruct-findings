// roc 2009-12 00697cd0  unit: RBX::VRootInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697cd0
//
// 00697cd0  6860684f00           push 0x4f6860
// 00697cd5  684cdeb700           push 0xb7de4c
// 00697cda  e85199d6ff           call 0x401630
// 00697cdf  83c408               add esp, 8
// 00697ce2  e9c9d9e5ff           jmp 0x4f56b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
