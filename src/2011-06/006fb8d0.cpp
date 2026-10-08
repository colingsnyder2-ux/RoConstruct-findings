// roc 2011-06 006fb8d0  unit: RBX::VFire::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006fb8d0
//
// 006fb8d0  6850135c00           push 0x5c1350
// 006fb8d5  68e0e5cb00           push 0xcbe5e0
// 006fb8da  e8315dd0ff           call 0x401610
// 006fb8df  83c408               add esp, 8
// 006fb8e2  e9d944ecff           jmp 0x5bfdc0
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
