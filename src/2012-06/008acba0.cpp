// roc 2012-06 008acba0  unit: RBX::NewNullTool  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008acba0
//
// 008acba0  6860c98a00           push 0x8ac960
// 008acba5  686830e500           push 0xe53068
// 008acbaa  e8f149b5ff           call 0x4015a0
// 008acbaf  83c408               add esp, 8
// 008acbb2  e909fcffff           jmp 0x8ac7c0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
