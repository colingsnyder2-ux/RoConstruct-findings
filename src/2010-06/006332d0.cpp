// roc 2010-06 006332d0  unit: RBX::VExplosion::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006332d0
//
// 006332d0  6820e34400           push 0x44e320
// 006332d5  685c1ac000           push 0xc01a5c
// 006332da  e8b1e3dcff           call 0x401690
// 006332df  83c408               add esp, 8
// 006332e2  e959a0e1ff           jmp 0x44d340
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
