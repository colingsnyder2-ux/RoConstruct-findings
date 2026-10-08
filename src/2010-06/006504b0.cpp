// roc 2010-06 006504b0  unit: RBX::VPlayerCamera::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006504b0
//
// 006504b0  68807d4600           push 0x467d80
// 006504b5  68c01fc000           push 0xc01fc0
// 006504ba  e8d111dbff           call 0x401690
// 006504bf  83c408               add esp, 8
// 006504c2  e9a96ce1ff           jmp 0x467170
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
