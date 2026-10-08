// roc 2010-06 006e7ee0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e7ee0
//
// 006e7ee0  6840d15c00           push 0x5cd140
// 006e7ee5  682c91c100           push 0xc1912c
// 006e7eea  e8a197d1ff           call 0x401690
// 006e7eef  83c408               add esp, 8
// 006e7ef2  e9b948eeff           jmp 0x5cc7b0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
