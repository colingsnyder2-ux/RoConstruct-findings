// roc 2008-06 006307c0  unit: RBX::VBodyThrust::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006307c0
//
// 006307c0  6814789700           push 0x977814
// 006307c5  68f0ff5b00           push 0x5bfff0
// 006307ca  e8616bf2ff           call 0x557330
// 006307cf  83c408               add esp, 8
// 006307d2  e9a9f3f8ff           jmp 0x5bfb80
// library rbxgs/util\Name.cpp (function ?mutex@Name@RBX@@CAAAV0boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Name.cpp
