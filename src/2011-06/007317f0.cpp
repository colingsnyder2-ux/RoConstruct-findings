// roc 2011-06 007317f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007317f0
//
// 007317f0  68c0117300           push 0x7311c0
// 007317f5  683c45cd00           push 0xcd453c
// 007317fa  e811feccff           call 0x401610
// 007317ff  83c408               add esp, 8
// 00731802  e979f8ffff           jmp 0x731080
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
