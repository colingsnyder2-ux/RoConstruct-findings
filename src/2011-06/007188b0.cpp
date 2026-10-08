// roc 2011-06 007188b0  unit: RBX::VNotificationObject::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007188b0
//
// 007188b0  6800155c00           push 0x5c1500
// 007188b5  684ce6cb00           push 0xcbe64c
// 007188ba  e8518dceff           call 0x401610
// 007188bf  83c408               add esp, 8
// 007188c2  e9c980eaff           jmp 0x5c0990
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
