// roc 2011-06 00721fa0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721fa0
//
// 00721fa0  68401e7200           push 0x721e40
// 00721fa5  687840cd00           push 0xcd4078
// 00721faa  e861f6cdff           call 0x401610
// 00721faf  83c408               add esp, 8
// 00721fb2  e9d9fcffff           jmp 0x721c90
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
