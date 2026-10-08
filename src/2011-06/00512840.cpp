// roc 2011-06 00512840  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512840
//
// 00512840  68b0974e00           push 0x4e97b0
// 00512845  687880cb00           push 0xcb8078
// 0051284a  e8c1edeeff           call 0x401610
// 0051284f  83c408               add esp, 8
// 00512852  e9596bfdff           jmp 0x4e93b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
