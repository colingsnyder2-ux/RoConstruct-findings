// roc 2011-06 0073e6a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073e6a0
//
// 0073e6a0  68507f6a00           push 0x6a7f50
// 0073e6a5  684c00cd00           push 0xcd004c
// 0073e6aa  e8612fccff           call 0x401610
// 0073e6af  83c408               add esp, 8
// 0073e6b2  e9397ef6ff           jmp 0x6a64f0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
