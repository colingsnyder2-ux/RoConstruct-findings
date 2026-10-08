// roc 2012-06 007af6d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007af6d0
//
// 007af6d0  6880f07a00           push 0x7af080
// 007af6d5  684cafe400           push 0xe4af4c
// 007af6da  e8c11ec5ff           call 0x4015a0
// 007af6df  83c408               add esp, 8
// 007af6e2  e9c9f7ffff           jmp 0x7aeeb0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
